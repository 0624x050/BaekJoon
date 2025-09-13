#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	int hour, min, time;
	int sum;

	scanf("%d %d", &hour, &min);
	scanf("%d", &time);

	sum = (hour * 60) + min + time;

	if (sum < 1440) {
		printf("%d %d \n", sum/60, sum%60);

	}
	else {
		printf("%d %d \n", (sum-1440) / 60, (sum-1440) % 60);
	}
}