#include "scores.h"

int count_c_grades(ScoreRecord records[], int n){
int count = 0;
for (int i = 0; i < n; i++){
if (records[i].score >=70 && records[i].score < 80){
count++;
}
}
return count;
}
