#include <stdio.h>

// ver 1.0 처음에는 i<num1 && i<num2
// ver 1.1 24, 48처럼 24가 최대 공약수인 경우도 있음. i<=num1 && i<=num2

int main(){
    int num1, num2;  // 최대 공약수
    int GCD=0;
    int LCM=0;  // 최대 공약수, 최소 공배수
    scanf("%d %d", &num1, &num2); 

    for(int i=1; i<=num1 && i<=num2; i++){
        if((num1%i)==0 && (num2%i)==0){
        GCD = i;
        LCM = i*(num1/i)*(num2/i);
        }
    }
    printf("%d\n", GCD);
    printf("%d", LCM);
    return 0;
}