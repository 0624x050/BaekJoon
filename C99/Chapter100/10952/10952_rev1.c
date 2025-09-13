#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int A, B;

	while (1) {
		scanf("%d %d", &A, &B);
		if(A == 0 && B == 0) { break; }
		else { printf("%d \n", A + B); }
	}
}