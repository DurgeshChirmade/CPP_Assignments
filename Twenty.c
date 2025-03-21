#include <stdio.h>

int factorial(int num)
{

    if (num == 0)
        return 1;

    float fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    float mult = 1;
    for (int i = 1; i <= pow; i++)
    {
        mult *= num;
    }
    return mult;
}

int main()
{

    float PI = 3.142;
    float x;

    printf("Enter value of x in degrees: ");
    scanf("%f", &x);

    float rad = x * (PI/180);

    /*
    int num=0;
    printf("Enter your numbewr : ");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("%d",fact);

    int pow;
    printf("Enter power : ");
    scanf("%d",&pow);

    int powe=power(num,pow);
    printf("\n%d",powe);
    */

    // sin(x) = x – x^3/3! + x^5/5! – x^7/7! + x^9/9!
    float res = rad - power(rad, 3) / factorial(3) + power(rad, 5) / factorial(5) - power(rad, 7) / factorial(7) + power(rad, 9) / factorial(9);
    printf("sin(%f) = %f", x, res);
}