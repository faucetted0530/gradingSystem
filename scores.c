#include <stdio.h>
#include "scores.h"

int main(int argc, char *argv[]){
if (argc !=2){
printf("Usage: ./scores <binary_file>\n");
return 1;
}

FILE *fp = fopen(argv[1], "rb");
if (fp == NULL){
printf("Error: cannot open file %s\n", argv[1]);
return 1;
}

ScoreRecord records[50];
int n = fread(records, sizeof(ScoreRecord), 50, fp);
if (n == 0){
printf("Error: cannot read file %s\n", argv[1]);
fclose(fp);
return 1;
}

int choice;
do{
printf("Menu:\n");
printf("1. Maximum Score\n");
printf("2. Minimum Score\n");
printf("3. Average Score\n");
printf("4. Standard Deviation\n");
printf("5. Number of A grades (90 <= score <= 100\n");
printf("6. Number of B grades (80 <= score < 90)\n");
printf("7. Number of C grades (70 <= score < 80)\n");
printf("8. Number of D grades (60 <= score < 70)\n");
printf("9. Number of students failed (score < 60)\n");
printf("10. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice){
case 1:
printf("Maximum score: %d\n", max_score(records, n));
break;
case 2:
printf("Minimum score: %d\n", min_score(records, n));
break;
case 3:
printf("Average score: %.2f\n", std_dev(records, n));
break;
case 4:
printf("Standard deviation: %.2f\n", std_dev(records, n));
break;
case 5:
printf("Number of A grades: %d\n", count_a_grades(records, n));
break;
case 6:
printf("Number of B grades: %d\n", count_b_grades(records, n));
break;
case 7:
printf("Number of C grades: %d\n", count_c_grades(records, n));
break;
case 8:
printf("Number of D grades: %d\n", count_d_grades(records, n));
break;
case 9:
printf("Number of students failed: %d\n", count_f_grades(records, n));
break;
case 10:
break;
default:
printf("Invalid choice\n");
}
} while (choice != 10);
fclose(fp);
return 0;
}
