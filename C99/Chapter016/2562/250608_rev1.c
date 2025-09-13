#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int arr[9];

	for (int i = 0; i < 9; i++) {
		scanf("%d\n", &arr[i]);
	}

	int max = arr[0];
	int max_num = 0;

	for (int j = 0; j < 9; j++) {
		if (arr[j] > max) {
			max = arr[j];
			max_num = j;
		}
	}
	printf("%d\n%d", max, max_num+1);
}