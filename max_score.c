#include "scores.h"

int max_score(ScoreRecord records[], int n){
int max = records[0].score;
for (int i = 1; i < n; i++){
if (records[i].score > max){
max = records[i].score;
}
}
return max;
}
