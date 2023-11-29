#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>
#include<stdlib.h>
int conCase(char c);
void rm(char str[]);

void rm(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}


int conCase(char c) {
	int ch = c;
	const int diff = 'a' - 'A';
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		if (ch >= 'A' && ch <= 'Z') return ch + diff;
		else if (ch >= 'a' && ch <= 'z')  return ch - diff;
	}
	else return ch;
}

int main(void) {
	char ch[100];
	char c[2];
	int l;
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	rm(ch);
	l = strlen(ch);
	printf("Output> ");
	for (int i = 0; i < l; i++) {
		printf("%c", conCase(ch[i]));
	}
	return 0;
}

