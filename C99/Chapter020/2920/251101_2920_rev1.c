#include <stdio.h>

// ver 1.0 조건과 받은 배열을 끝까지 비교해야함

int main(){
    int arr[9] = {0, };
    for(int i=0; i<8; i++){scanf("%d", &arr[i]);}

    int ascending = 1;
    int descending = 1;
    for(int i=0; i<8; i++){
        if(arr[i] != (i+1)){ascending = 0;}
        if(arr[i] != (8-i)){descending = 0;}
    }
    if(ascending==1) printf("ascending");
    else if(descending==1) printf("descending");
    else printf("mixed");
    return 0;
}