#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {

	double a;
	double b;

	printf("Please enter kilometers: ");
	scanf_s("%lf", &a);

	b = 1 / 1.609;

	printf("%.1f km is equal to %.1f miles", a, a * b);
	return 0;
}

