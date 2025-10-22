#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

    int bucket[101] = { 0, };

    int N, M = 0; // 공의 개수, 넣는 횟수
    int i, j, k = 0; // i번 바구니부터 j번 바구니, k번 번호

    scanf("%d %d", &N, &M);


    for (int A = 0; A < M; A++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int B = i-1; B < j; B++) {
            bucket[B] = k;
        }

    }
    for (int C = 0; C < N; C++) {
        printf("%d ", bucket[C]);
    }
    return 0;
}