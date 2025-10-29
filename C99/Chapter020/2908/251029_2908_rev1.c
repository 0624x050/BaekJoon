#include <stdio.h>
#include <math.h>

// ver 1.0 | valueA += (10^(2-i))*A[2-i]; 이때, A[2-i]는 아스키코드 형태
//         | 또한, ^ 는 xor 기호이니, 제곱함수 pow() 사용, 더블형 반환이니 (int) 사용

int main(){
    int valueA=0, valueB=0;
    char A[4], B[4];

    scanf("%s %s", A, B);
    
    for(int i=0; i<3; i++){
        valueA += ((int)pow(10, 2-i))*(A[2-i]-'0'); 
        valueB += ((int)pow(10, 2-i))*(B[2-i]-'0');
    }

    if(valueA>valueB){printf("%d", valueA);}
    else{printf("%d", valueB);}

    return 0;
}