#include <stdio.h>
#include <string.h>

// 문자열의 첫 글자, 마지막 글자 출력

int main(){
    char arr[1000];
    int T;          // 테스트 케이스 개수

    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%s", arr);
        printf("%c%c \n", arr[0], arr[strlen(arr)-1]);
    }  
    return 0;
}