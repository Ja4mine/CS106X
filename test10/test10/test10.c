#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct card {
    char suit;
    char value;
}card;
void setSuit(card* crd, char suit) {
    if (suit != 'H' && suit != 'S' && suit != 'D' && suit != 'C') {
        printf("Wrong color!");
        return;
    }
    else {
        crd->suit = suit;
    }
}

void setValue(card* card, char value) {
    card->value = value;
}

int getValue(card* crd) {
    if ((crd->value - '0') < 10) {
        return crd->value - '0';
    }
    else {
        if (crd->value == 'T') {
            return 10;
        }
        else if (crd->value == 'J') {
            return 11;
        }
        else if (crd->value == 'Q') {
            return 12;
        }
        else if (crd->value == 'K') {
            return 13;
        }
        else if (crd->value == 'A') {
            return 14;
        }
        else {
            return 0;
        }
    }
}

char getSuit(card* crd) {
    return crd->suit;
}

void cardPrint(card crd) {
    printf("%c%c", crd.suit, crd.value);
}

typedef struct hands {
    card cards[4][13];
    int pointers[4];
}hands;// 0 = spade, 1 = heart, 2 = diamond, 3 = club

void init_hands_pointers(hands* hands) {
    for (int i = 0; i < 4; i++) {
        hands->pointers[i] = 0;
    }
}

void setHands(hands* hands, card* card) {
    if (getSuit(card) == 'S') {
        hands->cards[0][hands->pointers[0]++] = *card;
    }
    else if (getSuit(card) == 'H') {
        hands->cards[1][hands->pointers[1]++] = *card;
    }
    else if (getSuit(card) == 'D') {
        hands->cards[2][hands->pointers[2]++] = *card;
    }
    else {
        hands->cards[3][hands->pointers[3]++] = *card;
    }
}

void swap(hands* hands, int row, int i, int j) {
    card temp;
    temp = hands->cards[row][j];
    hands->cards[row][j] = hands->cards[row][i];
    hands->cards[row][i] = temp;
}
void sort(hands* hands, int row) {
    bool exitflag;
    for (int p = 0; p < 13; p++) {
        exitflag = true;
        for (int q = 0; q < 13 - p; q++) {
            if (getValue(&hands->cards[row][q]) > getValue(&hands->cards[row][q + 1])) swap(hands, row, q, q + 1);
            else continue;

            exitflag = false;
        }
        if (exitflag) break;
    }
}

void sort_all_hands(hands* hands) {
    if (hands->pointers[0] == 0 && hands->pointers[1] == 0 && hands->pointers[2] == 0 && hands->pointers[3] == 0) {
        printf("No elements\n");
        return;
    }
    else {
        //bubble sort
        for (int row = 0; row < 4; row++) {
            sort(hands, row);
        }
    }
}

int point_calc(hands* hands) {
    int result = 0;
    for (int row = 0; row < 4; row++) {
        for (int j = 0; j < hands->pointers[row]; j++) {
            if (getValue(&hands->cards[row][j]) == 11) result += 1;
            if (getValue(&hands->cards[row][j]) == 12) result += 2;
            if (getValue(&hands->cards[row][j]) == 13) result += 3;
            if (getValue(&hands->cards[row][j]) == 14) result += 4;
            if (hands->pointers[row] == 1 && getValue(&hands->cards[row][0]) > 10) result--;
        }
    }
    return result;
}

int adjust_point_calc(hands* hands) {
    int result = point_calc(hands);
    for (int row = 0; row < 4; row++) {
        if (hands->pointers[row] == 5 || hands->pointers[row] == 2) result += 1;
        if (hands->pointers[row] == 6 || hands->pointers[row] == 1) result += 2;
        if (hands->pointers[row] > 6 || hands->pointers[row] == 0) result += 3;
    }
    return result;
}


void printHands(hands* hand) {
    for (int row = 0; row < 4; row++) {
        printf("<");
        for (int j = 0; j < hand->pointers[row]; j++) {

            cardPrint(hand->cards[row][j]);
            if (j != hand->pointers[row] - 1) printf(" ");
        }
        printf(">");
    }
}

int main() {
    char test[13][2] = { "S5", "HT", "DK", "S4", "H7", "S6", "S8", "D2", "H3", "H2", "DT", "DA", "S9" };
    hands* player1 = malloc(sizeof(hands));
    init_hands_pointers(player1);
    for (int s = 0; s < sizeof(test) / sizeof(test[0]); s++) {
        card* card_i = malloc(sizeof(card));
        setSuit(card_i, test[s][0]);
        setValue(card_i, test[s][1]);
        setHands(player1, card_i);
        free(card_i);
    }


    sort_all_hands(player1);
    printHands(player1);
}