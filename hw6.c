#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>



int main(void) {
	int arr[5];
	int odd[5],o = 0;
	int even[5], e = 0;
	printf("Please input five integers: ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[e] = arr[i];
			e++;
		}
		else {
			odd[o] = arr[i];
			o++;
		}
	}
	printf("Odd numbers: ");
	for (int p = 0; p < o; p++) {
		printf("%d ", odd[p]);
	}
	printf("\n");

	printf("Even numbers: ");
	for (int q = 0; q < e; q++) {
		printf("%d ", even[q]);
	}


	return 0;
}

