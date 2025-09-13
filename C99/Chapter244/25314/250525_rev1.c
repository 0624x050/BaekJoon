#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int N;
	int value;

	scanf("%d", &N);;

	value = N / 4;

	for (int i = 0; i < value; i++) {
		printf("long ");
	}
	printf("int");
}