#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int T;
	int A, B;
	int num;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		num = i+1;
		printf("Case #");
		printf("%d", num);
		printf(": ");
		printf("%d \n", A + B);
	}	
}