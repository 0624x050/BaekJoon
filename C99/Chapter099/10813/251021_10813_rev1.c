#include <stdio.h>


int main(){
    int N, M; // N: 바구니 개수, M: 공 바꿀 기회
    int i, j; // 교환할 바구니 (i<j)

    scanf("%d %d", &N, &M);


    int basket[101] = {0,}; 

    for(int a = 0; a<N; a++){
        basket[a+1] = a+1;
    }

    for(int b = 0; b<M; b++){
        scanf("%d %d", &i, &j);
        int temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;       
    }

    for(int c = 0; c<N; c++){
        printf("%d ", basket[c+1]);
    }
    return 0;
}
