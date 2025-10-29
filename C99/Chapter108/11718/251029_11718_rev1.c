#include <stdio.h>

int main(){
    char input[101];

    while(scanf("%[^\n]s", input) != EOF) {printf("%s\n", input); getchar();}

    return 0;
}