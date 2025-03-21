#include<stdio.h>

void charline(char sym, int len) {

	for (int i = 1; i <= len; i++) {
		printf("%c", sym);
	}
}

int main() {

	char sym; int len;

	printf("Enter symbol for print line : ");
	scanf("%c", &sym);

	printf("Enter length of line : ");
	scanf("%d", &len);

	charline(sym, len);
	printf("Data Type \t Size in Bytes");

	printf("Integer \t %u", sizeof(int));
}