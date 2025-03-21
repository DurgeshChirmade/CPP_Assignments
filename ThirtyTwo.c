#include<stdio.h>

typedef struct Book{
    int bookid;
    char title[20];
    double price;
} BOOK;

int main(){

    BOOK bk;
    
    printf("Enter Book Id : ");
    scanf("%d",&bk.bookid);

    printf("Enter Book Title : ");
    scanf("%s",&bk.title);

    printf("Enter Book Price : ");
    scanf("%lf",&bk.price);

    printf("%d %s %lf",bk.bookid,bk.title,bk.price);
}