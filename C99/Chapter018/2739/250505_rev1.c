#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int value;
	int i;

	scanf("%d", &value);

	for (i = 1; i < 10; i++) {
		printf("%d", value);
		printf(" * ");
		printf("%d", i);
		printf(" = ");
		printf("%d \n", value * i);
	}
}