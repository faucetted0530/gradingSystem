#include "scores.h"

int count_a_grades(ScoreRecord records[], int n){
int count = 0;
for (int i = 0; i < n; i++){
if (records[i].score >= 90 && records[i].score <= 100){
count ++;
}
}
return count;
}
