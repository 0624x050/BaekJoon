#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    char A1 = A + '0';
    char B1 = B + '0';
    char C1 = C + '0';
    int num1 = atoi(A1)+atoi(B1);
    int num2  = atoi(C1);
    
    printf("%d\n", A+B-C);
    printf("%d", num1-num2);
    return 0;
}