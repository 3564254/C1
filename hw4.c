# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num;
	int prime = 1;
	printf("Please enter a number: ");
	
	scanf_s("%d", &num);

	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0) {
			prime = 0; // 소수가 아니다
			break;
		}
	}

	if (num == 1) {
		printf("It is not a prime number.");
	}
	else if (prime) {
		printf("It is a prime number.");
	}
	else {
		printf("it is not a prime number");
	}
	return 0;
}