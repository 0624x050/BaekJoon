#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int X, N; // 총 금액, 구매한 물건 종류의 수
	int sum = 0;  // 물건 가격 비교

	scanf("%d\n %d", &X, &N);;

	for (int i = 0; i < N; i++) {
		int a, b; // 가격, 개수
		scanf("%d %d", &a, &b);
		sum += (a * b);
	}
	
	if (X == sum) { printf("Yes"); }
	else { printf("No"); };

	return 0;
}