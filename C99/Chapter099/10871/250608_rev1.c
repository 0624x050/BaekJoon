#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int N, X;
	
	scanf("%d %d", &N, &X);

	int arr[N];

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int count = 0;
	for (int j = 0; j < N; j++) {
		if (arr[j] < X)
			printf("%d ", arr[j]);
	}
	
}