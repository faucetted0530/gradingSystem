#include "scores.h"
#include <math.h>

double std_dev(ScoreRecord records[], int n){
double avg = avg_score(records, n);
double sum_squares = 0;
for (int i = 0; i < n; i++){
double diff = records[i].score - avg;
sum_squares += diff * diff;
}
double variance = sum_squares / n;
return sqrt(variance);
}
