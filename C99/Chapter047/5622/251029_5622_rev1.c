#include <stdio.h>
#include <string.h>

int Dial(int n){
    switch(n){
        case 'A':       // Dial 2
        case 'B':
        case 'C':
            return 3;
        case 'D':       // Dial 3
        case 'E':
        case 'F':
            return 4;
        case 'G':       // Dial 4
        case 'H':
        case 'I':
            return 5;
        case 'J':       // Dial 5
        case 'K':
        case 'L':
            return 6;
        case 'M':       // Dial 6
        case 'N':
        case 'O':
            return 7;
        case 'P':       // Dial 7
        case 'Q':
        case 'R':
        case 'S':
            return 8;
        case 'T':       // Dial 8
        case 'U':
        case 'V':
            return 9;
        default:        // Dial 9 (W, X, Y, Z)
            return 10;
    }
}

int main(void){
    int time=0;
    char num[16];

    scanf("%s", num);
    int len = strlen(num);

    for(int i=0; i<len; i++){
        time += Dial(num[i]);
    }
    printf("%d", time);

    return 0;
}