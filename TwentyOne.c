#include <stdio.h>

double arcir(double r, double *area, double *circum)
{

    *area = r * r * 3.142;
    *circum = 3.142 * 2 * r;
}
double areaperi(int l, int b, int *area_rect, int *circum_rect)
{
    
    *area_rect = l * b;
    *circum_rect = 2 * (l + b);
    printf("%d %d %d %d",l,b,*area_rect,*circum_rect);
}
int main()
{

    printf("\n MENU \n 1.Circle \n 2.Rectangle\n");

    int ch;
    printf("Enter your choice : ");
    scanf("%d", &ch);

    double area = 0.0, circum = 0.0, r;
    int area_rect=0,circum_rect=0;

    int l, b;

    switch (ch)
    {

    case 1:
        printf("Enter radius : ");
        scanf("%lf", &r);
        arcir(r, &area, &circum);
        printf("%lf %lf", area, circum);
        break;

    case 2:
        printf("Enter length : ");
        scanf("%d", &l);

        printf("Enter breadth : ");
        scanf("%d", &b);
        areaperi(l, b, &area_rect, &circum_rect);
        printf("\n%d %d", area_rect, circum_rect);
        break;

    default:
        printf("Invalid choice...");
    }
}