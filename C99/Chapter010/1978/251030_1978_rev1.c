#include <stdio.h>

int main(){
    int N;
    int cnt=0;      // 소수가 맞으면 cnt 증가
    int input[100];
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){scanf("%d", &input[i]);}
    for(int i=0; i<N; i++){
        int divide =0;
        for(int j=2; j<input[i]; j++){
            if(input[i]%j == 0){divide++;} 
        }
        if(divide == 0 && input[i] > 1){cnt++;}
    }
    printf("%d", cnt);
    return 0;
}