#include "scores.h"
int min_score(ScoreRecord records[], int n){
int min = records[0].score;
for (int i = 1; i < n; i++){
if (records[i].score < min){
min = records[i].score;
}
}
return min;
}
