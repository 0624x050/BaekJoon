#include <stdio.h>

// 삼각형 피타고라스 a, b, c (a,b,c 크기 기준 없음)

int main(){
    int temp=0, cnt=0;
    int A, B, C;
    while(1){
        scanf("%d %d %d", &A, &B, &C);

        int doubleA = A*A;
        int doubleB = B*B;
        int doubleC = C*C;

        if(A==0 && B==0 && C==0){return 0;}

        if(doubleA == doubleB+doubleC || doubleB == doubleA+doubleC || doubleC == doubleA+doubleB) {printf("right\n");}
        else {printf("wrong\n");}
    }
    return 0;
}