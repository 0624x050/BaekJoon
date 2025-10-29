#include <stdio.h>

int main(){
    char S[20];
    char P[160];
    int T, R;
    int cnt=0;

    scanf("%d", &T);     //테스트 개수

    for(int i=0; i<T; i++){
        scanf("%d %s", &R, S);   // 테스트 반복 횟수

        for(int j=0; S[j]!='\0'; j++){
            cnt = 0;
            for(int k=0; cnt<R; k++){printf("%c", S[j]); cnt++;}
        }
        printf("\n");
    }
}