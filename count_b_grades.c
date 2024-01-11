#include "scores.h"

int count_b_grades(ScoreRecord records[], int n){
int count = 0;
for (int i = 0; i < n, i++;){
if (records[i].score >= 80 && records[i].score < 90){
count++;
}
}
return count;
}
