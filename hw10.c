#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

typedef struct {
	char name[100];
	char country[100];
	int population;
} City;

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void) {
	int ch1;
	City cityArray[3];
	printf("Input three cities\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> "); fgets(cityArray[i].name, sizeof(cityArray[i].name), stdin); RemoveBSN(cityArray[i].name);
		printf("Country> "); fgets(cityArray[i].country, sizeof(cityArray[i].country), stdin); RemoveBSN(cityArray[i].country);
		printf("Population> "); scanf("%d", &cityArray[i].population);
		getchar();

		//while (getchar() != '\n');
	}
	for (int i = 0; i < 3; i++) {
		printf("%s in %s with a population of %d people\n", cityArray[i].name, cityArray[i].country, cityArray[i].population);
	}
	return 0;
}



