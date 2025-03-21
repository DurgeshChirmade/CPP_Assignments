#include <stdio.h>

typedef struct Book
{
    int bookid;
    char title[20];
    double price;
} BOOK;

int display(BOOK bk[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d %s %lf\n", bk[i].bookid, bk[i].title, bk[i].price);
    }
}

int main()
{

    BOOK bk[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Book Id : ");
        scanf("%d", &bk[i].bookid);

        printf("Enter Book Title : ");
        scanf("%s", &bk[i].title);

        printf("Enter Book Price : ");
        scanf("%lf", &bk[i].price);
    }

    display(bk);

    /*
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d %s %lf\n", bk[i].bookid, bk[i].title, bk[i].price);
    }
        */
}