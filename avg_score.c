#include "scores.h"

double avg_score(ScoreRecord records[], int n){
double sum = 0;
for (int i = 0; i < n; i++){
sum+= records[i].score;
}
return sum / n;
}
