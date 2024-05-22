#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("%d", a + b);
	while (1) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else {
			printf("%d", a + b);
		}
	}
}
