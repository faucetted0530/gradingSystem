#include "scores.h"

int count_f_grades(ScoreRecord records[], int n){
int count = 0;
for(int i = 0; i < n; i++){
if (records[i].score < 60){
count++;
}
}
return count;
}

