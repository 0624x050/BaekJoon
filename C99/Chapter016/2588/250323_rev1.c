#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int value1, value2;

	scanf("%d %d", &value1, &value2);

	printf("%d \n", (value1) * ((value2 % 100) % 10));
	printf("%d \n", (value1) * ((value2 % 100) / 10));
	printf("%d \n", (value1) * (value2/100));
	printf("%d \n", (value1) * (value2));

}