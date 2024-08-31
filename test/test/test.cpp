
#include <stdio.h>

int main(int argc, char* argv[]) {
   
    int num_subj = argc - 1, valid_subj = argc - 1;
    float sum_gpa = 0.0, sum_othersys = 0.0, cur_polyscore, cur_othersys;
    char cur_grade, grade_str[3];
    int i;

    grade_str[2] = '\0';
    //first one in argv is the name of file
    if (num_subj > 10) {
        printf("At most 10 grades in the input list!");                
        return 0;
    }

    printf("PolyU System: \n");
    for (i = 1; i <= num_subj; i++) {
        cur_grade = argv[i][0];
        switch (cur_grade) {
        case 'A': cur_polyscore = 4.0; break;
        case 'B': cur_polyscore = 3.0; break;
        case 'C': cur_polyscore = 2.0; break;
        case 'D': cur_polyscore = 1.0; break;
        case 'F': cur_polyscore = 0.0; break;
        default:
            printf("Wrong grade %s\n", argv[i]); 
            valid_subj -= 1;
        }
        if (argv[i][1] == '+') cur_polyscore += 0.3;

        if (cur_polyscore == 1 && argv[i][1] == '-') {
            valid_subj -= 1;
            cur_polyscore = 0;
            grade_str[0] = cur_grade; grade_str[1] = argv[i][1];
            printf("Grade for subject %i is %s, invalid\n", i, grade_str, cur_polyscore);
        }
        if (argv[i][1] == '-') {
            cur_polyscore -= 0.3;
            grade_str[0] = cur_grade; grade_str[1] = argv[i][1];
            printf("Grade for subject %i is %s, GP %3.1f\n", i, grade_str, cur_polyscore);
        }
        sum_gpa += cur_polyscore / valid_subj;
    }
    printf("Your GPA for %i valid subjects is %4.2f", valid_subj, sum_gpa);
    printf("\nOther System: \n");
    for (i = 1; i <= num_subj; i++) {
        cur_grade = argv[i][0];
        switch (cur_grade) {
        case 'A':cur_othersys = 11; break;
        case 'B':cur_othersys = 8; break;
        case 'C':cur_othersys = 5; break;
        case 'D':cur_othersys = 2; break;
        case 'F':cur_othersys = 0; break;
        default:printf("Wrong grade %s\n", argv[i]);
        }
        if (argv[i][1] == '+') cur_othersys += 1;
        if (argv[i][1] == '-') cur_othersys -= 1;
        grade_str[0] = cur_grade; grade_str[1] = argv[i][1];
        printf("Grade for subject %i is %s, GP %2.0f\n", i, grade_str, cur_othersys);

        sum_othersys += cur_othersys / valid_subj;
    }
    printf("Your GPA for %i valid subjects is %4.2f\n", valid_subj, sum_othersys);

}
