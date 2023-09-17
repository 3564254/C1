#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	// 개념 확인 과제
	int a, b;
	printf("Input two integers: ");
	scanf_s("%d %d", &a, &b);
	int result1 = a & b;
	int result2 = a | b;
	int result3 = a ^ b;
	printf("%d & %d = %d\n", a, b, result1);
	printf("%d | %d = %d\n", a, b, result2);
	printf("%d ^ %d = %d\n", a, b, result3);
	
	return 0;
}