#include <stdio.h>

// 단어 S의 i번째 글자 출력

int main(){
    char S[1000];
    int i;
    scanf("%s", S);     // keypoint : 배열 자체가 주소
    scanf("%d", &i);

    printf("%c", S[i-1]);
    return 0;
}