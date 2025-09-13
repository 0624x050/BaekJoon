#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int max;
	int A, B;

	scanf("%d", &max);

	for (int i = 0; i < max; i++) {
		scanf("%d %d", &A, &B);
		printf("%d \n", (A + B));
	}
}