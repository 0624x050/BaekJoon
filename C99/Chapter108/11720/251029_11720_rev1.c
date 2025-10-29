#include <stdio.h>

// 처음에는 숫자 누적 합인줄 알았으나, 공백없이 숫자 입력받고 하나씩 쪼갬
// 문자열 입력(%s)은 배열 이름만 전달, 나머지는 배열 요소 하나의 주소 전달

int main(){
    int N, sum = 0;
    char arr[100];

    scanf("%d", &N);
    
    for(int i = 0; i<N; i++){
        scanf("%1d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d", sum);
    return 0;
}