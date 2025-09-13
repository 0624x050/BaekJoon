#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	int D1, D2, D3;
	int Dmax;

	scanf("%d %d %d", &D1, &D2, &D3);

	if ((D1 == D2) && (D2 == D3)) {
		printf("%d", 10000 + (D1 * 1000));
	}
	else if((D1 == D2) || (D1 == D3) || (D2 == D3)){
		if (D1 == D2) { printf("%d", 1000 + (D1 * 100)); }
		else if (D1 == D3) { printf("%d", 1000 + (D1 * 100)); }
		else { printf("%d", 1000 + (D2 * 100)); }
	}
	else {
		Dmax = D1;
		if (D2 > Dmax) {
			if (D2 > D3) { printf("%d", D2 * 100); }
			else { printf("%d", D3 * 100); }
		}
		else if (D3 > Dmax) { printf("%d", D3 * 100); }
		else { printf("%d", D1 * 100); }
	}
}