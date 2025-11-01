// ver 1.0 소수가 맞으면 소수 출력
// ver 1.1 시간초과로 인해 코드 수정 > 에라토스테네체의 체
// ver 1.2 c언어에서는 전부 소수일 것이라고 가정 후, 계산

#include <stdio.h>

int arr[1000001];

int main(){
   int M, N;
    scanf("%d %d", &M, &N);

    arr[0]=0; 
    arr[1]=0;

    for(int i=2; i<=N; i++){ arr[i]=1; }

    for(int i=2; i<=N; i++){
        if(arr[i]){
            for(int j=i*2; j<=N; j+=i){ arr[j]=0; } // i의 배수 제거
        }
    }  

    for(int i=M; i<=N; i++){
        if(arr[i]==1){ printf("%d\n", i); }
    }

    return 0;
}