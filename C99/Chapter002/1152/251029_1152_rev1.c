#include <stdio.h>
#include <string.h>

// keypoint, 공백까지 포함해서 읽기
// %s 입력 시, 공백 생기면 입력 끊김

int main(){
    int cnt=0;
    int word=0;
    char sentence[1000001];
    scanf("%[^\n]s", sentence);

    for(int i=0; sentence[i]!= '\0'; i++){
        if(sentence[i] != ' '){         
            if(!word) {cnt++; word=1;}  // 지금까지 단어 밖이었다가, 단어 안에 오면 개수 증가, 단어 안에 있음
        }
        else{word=0;}                   // 공백이면 단어 끝
    }
    printf("%d\n", cnt);               
    return 0;
}