#define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
void binary(int a);
int num = 0;

int main(void) {
	int num1;
	printf("Please enter a number: ");
	scanf_s("%d", &num1);
	binary(num1);
	return 0;
}


void binary(int a) {
	if (a < 2) printf("%d", a);
	else { 
		binary(a / 2);
		printf("%d", a % 2);
	}
	
 }
// 00101