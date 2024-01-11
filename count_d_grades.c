#include "scores.h"

int count_d_grades(ScoreRecord records[], int n){
int count = 0;
for (int i = 0; i < n; i++){
if (records[i].score >= 60 && records[i].score < 70){
count++;
}
}
return count;
}
