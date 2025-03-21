//#include<stdio.h>
//
//int main() {
//
//	int num,sum=0,rem;
//
//	printf("Enter your number : ");
//	scanf_s("%d", &num);
//
//	int temp = num;
//
//	while (num > 0) {
//		rem = num % 10;
//		sum = sum + (rem * rem * rem);
//		num = num / 10;
//	}
//	
//	if (sum == temp) {
//		printf("%d is Armstrong number.", temp);
//	}
//	else
//	{
//		printf("%d is not a Armstrong number.", temp);
//	}
//}