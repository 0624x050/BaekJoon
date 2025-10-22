#include <stdio.h>

int main() {
    int n;
    int student[30] = {0}; // student number

    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        student[n-1] = n;
    }

    for (int j = 0; j < 30; j++) {
        if (student[j] == 0) {printf("%d\n", j+1);}
    }

    return 0;
}
