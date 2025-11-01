// ver 1.0 N!뒤에서 처음 0이 아닌 숫자 나올 때까지, 0 개수 구하기
// ver 1.1 본질에 접근해야함. 숫자에 0이 생기는 이유는 2x5 합 때문에
// ver 1.2 N! 직접 계산은 오버플로우가 발생함.

#include <stdio.h>

int main(){
    int N;
    int cnt=0;
    scanf("%d", &N);

    for(int i=5; i<=N; i*=5){
        cnt += N/i;
    }
    
    printf("%d", cnt);
    return 0;
}