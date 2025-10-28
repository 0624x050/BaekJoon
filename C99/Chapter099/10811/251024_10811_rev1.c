#include <stdio.h>

int N, M;                   // N: 바구니 개수, M: 바구니 바꿀 기회
int start, end;             // start: 변경 시작, end: 변경 종료
int bucket[100] = {0, };    // 바구니
int temp;                   // 역순을 위한 임시 바구니

void swap(int *a, int *b){
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){

    scanf("%d %d", &N, &M);

    for(int i = 0; i<N; i++){       // 바구니 번호 지정
        bucket[i] = i+1;
    }

    for(int j=0; j<M; j++){         // 바구니 index 보정
        scanf("%d %d", &start, &end);
        start--;        // 시작 index 보정
        end--;          // 종료 index 보정
        while(start < end){         // 역순 배치
            swap(&bucket[start], &bucket[end]); 
            start++;
            end--;     
        }
    }
    for(int k=0; k<N; k++) {printf("%d ", bucket[k]);}
    return 0;
}

