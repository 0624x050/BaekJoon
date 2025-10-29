#include <stdio.h>

int main(){
    
    int T; 

    char answer[80];
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int sum = 0;
        int cnt = 0;
        scanf("%s", answer);
        for(int j=0; answer[j]!='\0'; j++){
            if(answer[j]=='O'){
                cnt++;
                sum = sum + cnt;
            }
            else{cnt = 0;}
        }
        printf("%d\n", sum);
        
    }
    return 0;
}