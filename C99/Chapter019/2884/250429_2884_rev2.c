#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	int hour, min;

	scanf("%d %d", &hour, &min);

	if (hour == 0) {
		if (min >= 45) {
			printf("%d %d", hour, min - 45);
		}
		else { printf("%d %d", hour + 23, min + 60 - 45); }

	}
	else {
		if(min >= 45) {
			printf("%d %d", hour, min - 45);
		}
		else { printf("%d %d", hour-1, min + 60 - 45); }
	}
}