#include <stdio.h>

// ver 1.0 입력 받은 값을 오름차순 정렬
// ver 1.1 중복 숫자가 나오니, 카운트 세는 방식

int main(){
    int N, num;
    int count[10001]={0, };

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &num);
        count[num]++;
    }
    
    for(int i=1; i<10001; i++){
        for(int j=0; j<count[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}