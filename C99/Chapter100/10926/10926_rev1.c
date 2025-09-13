#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    // 아래와 같은 배열명 선언은 배열 변수명 자체가 주소값으로 지정됨
    char str[50];
    int i = 0;

		// 문자열 변수명 str은 그 자체가 주소값을 지칭하므로 &없이 사용. 
		// "%[^\n]" < 띄어쓰기 키가 와도 문자열을 계속 이어서 str에 저장하기 위해서
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("??!");
}