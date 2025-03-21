/*
#include<stdio.h>

int main() {

	int num1, num2;
	printf("Enter your First number : ");
	scanf_s("%d", &num1);

	printf("Enter your Second number : ");
	scanf_s("%d", &num2);

	printf("\n MENU \n 1.+Addition \n 2.-Subtraction \n 3.*Multiplication \n 4./Division \n");

	int ch;
	printf("Enter your choice : ");
	scanf_s("%d", &ch);

	int res;

	switch (ch) {
		case 1: res = num1 + num2;
				  printf("Addition of %d & %d is %d", num1, num2, res);
				  break;

		case 2: if (num1 > num2) {
					res = num1 - num2;
				  }
				else {
					res = num2 - num1;
				}
				printf("Subtraction of %d & %d is %d", num1, num2, res);
				break;

		case 3: res = num1 * num2;
				  printf("Multiplication of %d & %d is %d", num1, num2, res);
				  break;

		case 4: res = num1 / num2;
				  printf("Division of %d & %d is %d", num1, num2, res);
				  break;

		default:printf("Invalid choice....");

	}
}
*/