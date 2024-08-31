#include <stdio.h>




int main(int argc, char* argv[]) {
	int num_subj = argc - 1, valid_subj = argc - 1;
	float cur_class_score,cur_gpa, polySum = 0,otherSum = 0;
	char grade;
	int i;
	printf("PolyU System: \n");
	for (i = 1; i <= num_subj; i++) {
		grade = argv[i][0];
		switch (grade) {
		case 'A':cur_class_score = 4.0; break;
		case 'B':cur_class_score = 3.0; break;
		case 'C':cur_class_score = 2.0; break;
		case 'D':cur_class_score = 1.0; break;
		case 'F':cur_class_score = 0.0; break;
		default: printf("Wrong input! \n"); valid_subj -= 1; break;
		}
		if ((cur_class_score == 1.0) && argv[i][1] == '-') {
			valid_subj -= 1;
			printf("Grade for subject %i is %c%c, invalid \n", i, argv[i][0], argv[i][1]);
			continue;

		}
		else {
			if (argv[i][1] == '+') cur_class_score += 0.3;
			if (argv[i][1] == '-') cur_class_score -= 0.3;
		}
		printf("Grade for subject %i is %c%c, GP %3.1f \n", i, argv[i][0], argv[i][1], cur_class_score);
		polySum += cur_class_score;
	}
	printf("Your GPA for %i valid subjects is %4.2f \n", valid_subj, polySum / valid_subj);
	printf("Other System: \n");
	valid_subj = argc - 1;

	for (i = 1; i <= num_subj; i++) {
		grade = argv[i][0];
		switch (grade) {
		case'A':cur_class_score = 11; break;
		case'B':cur_class_score = 8; break;
		case'C':cur_class_score = 5; break;
		case'D':cur_class_score = 2; break;
		case'F':cur_class_score = 0; break;
		default:
			printf("Wrong input!\n"); 
			valid_subj -= 1;
			break;
		}
		if (argv[i][1] == '+') cur_class_score += 1;
		if (argv[i][1] == '-') cur_class_score -= 1;
		printf("Grade for subject %i is %c%c, GP %3.0f \n", i, argv[i][0], argv[i][1], cur_class_score);
		otherSum += cur_class_score;
	}
	printf("Your GPA for %i valid subjects is %4.2f \n", valid_subj, otherSum / valid_subj);
	


}


