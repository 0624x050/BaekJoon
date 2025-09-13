#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int N;
	
	scanf("%d", &N);

	int arr[N];

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int V;
	scanf("%d", &V);

	int count = 0;
	for (int j = 0; j < N; j++) {
		if (arr[j] == V)
			count++;
	}
	printf("%d\n", count);	
}