#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int A, B;

	while (1) {
		
		if(scanf("%d %d", &A, &B) == EOF) { break; } // Ctrl+Z(^Z) 로 실행
		else { printf("%d \n", A + B); }
	}
}