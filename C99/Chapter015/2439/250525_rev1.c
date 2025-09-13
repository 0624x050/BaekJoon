#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N-i; j++) {
			printf(" ");
			
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}