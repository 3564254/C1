#define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>

int main(void) {

	int num = 5;
	/*printf("���� �Է�: ");
	scanf_s("%d", &num);*/


	for (int i = 0; i < num; i++) {
		for (int j = num - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 2 * i + 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
// ��: 1 3 5 7 9
// ��: 4 3 2 1 0