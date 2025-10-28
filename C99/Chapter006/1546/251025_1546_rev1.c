#include <stdio.h>

int N;                      // 시험 본 과목의 개수 
int M = 0;                  // 시험 점수 최대점
int subject[1000] = {0, };
float sum;                    // 시험 점수 (전체)

int main() {

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &subject[i]);
        if(M<subject[i]){
            M = subject[i];
        }
    
    }
    for (int j = 0; j<N; j++){sum += (float) subject[j]/M * 100;}
    printf("%f", sum/N);
    
    return 0;
}
