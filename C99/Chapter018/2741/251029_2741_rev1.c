#include <stdio.h>

// 숫자 입력하면, 1~입력한숫자 한 줄 씩 출력

int main(){
    int N;  
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        printf("%d\n", i+1);
    }
    return 0;
}