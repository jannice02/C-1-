#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void trans(int num) {
	if (num < 2)
		printf("%d", num);
	else {
		trans(num / 2);
		printf("%d", num % 2);
	}

}

int main(void) {
	int num2;
	printf("Please enter a number : ");
	scanf("%d", &num2);
	trans(num2);

	return 0;
}