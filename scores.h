#include <stdio.h>

typedef struct {
char name [50];
int score;
} ScoreRecord;

int max_score(ScoreRecord records[], int n);
int min_score(ScoreRecord records[], int n);
double avg_score(ScoreRecord records[], int n);
double std_dev(ScoreRecord records[], int n);
int count_a_grades(ScoreRecord records[], int n);
int count_b_grades(ScoreRecord records[], int n);
int count_c_grades(ScoreRecord records[], int n);
int count_d_grades(ScoreRecord records[], int n);
int count_f_grades(ScoreRecord records[], int n);


