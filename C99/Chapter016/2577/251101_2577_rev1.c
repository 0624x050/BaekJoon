#include <stdio.h>

// ver1.0 1 2 3 4 5등 공백으로 숫자 들어오면 scanf("%d", &arr[i]);
//        170을 하나씩 나눠 저장하려면 char[]으로 입력받기

int main(){
    int A, B, C;
    int digit[11]={0,};
    scanf("%d %d %d", &A, &B, &C);
    int sum = A*B*C;
    int num=0;
    
    while(sum>0){
        num = sum%10;
        digit[num]++;
        sum /= 10;
    }
    
    for(int i=0; i<10; i++) {
        printf("%d\n", digit[i]); 
    }
    return 0;
}