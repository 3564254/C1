#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

double dev(int* num, double avg);

double dev(int* num,double avg) {
	double var = 0;
	for (int i = 0; i < 5; i++) {
		double a = num[i] - avg;
		var += pow(a, 2);
	}
	var /= 5;
	return sqrt(var);
}


int main(void) {
	int arr[5];
	double avg = 0, ans = 0;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		avg += arr[i];
	}
	avg /= 5;
	printf("Standard Deviation = %f", dev(arr, avg));


	return 0;
}





