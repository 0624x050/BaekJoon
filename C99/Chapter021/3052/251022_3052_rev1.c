#include <stdio.h>

int main(){
    int A;          // input
    int B = 42;     // 나누기 42
    int C = 0;      // 중복 안 된 나머지 개수
    int rest[10];
    int i, j;
    int restmode;   // 나머지 중복 여부 (0: 중복, 1: 중복아님)

    for(i=0; i<10; i++){
        scanf("%d", &A);
        rest[i] = (A%B);
        restmode = 1;
        
        if(i>0){
            for(j=1; j<=i; j++){
                if(rest[i] == rest[i-j]){ restmode =0; break; }
            }
        }
        if(restmode) { C++; }
    }
    printf("%d", C);
}