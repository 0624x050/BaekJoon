#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int max;
	int sum = 0;

	scanf("%d", &max);

	for (int i = 0; i <= max; i++) {
		sum = sum + i;
	}

	printf("%d \n", sum);
}