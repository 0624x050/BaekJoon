#include <stdio.h>
#include <string.h>
// 알파벳 소문자(아스키코드:97~122)로만 있는 단어 S
// 단어 포함되면 처음 등장 위치, 아니면 -1 출력

int main(){
    char S[101];
    int alpha[26];
    int index;

    for(int i=0; i<26; i++){alpha[i] = -1;}

    scanf("%s", S);  // 오버플로우 방지

    for(int j=0; S[j]!='\0'; j++){
        index = S[j] - 'a';
        if(alpha[index] == -1){alpha[index] = j;}
    }     
    
    for(int k=0; k<26; k++){printf("%d ", alpha[k]);}
    
    return 0;
}