#include<stdio.h>

struct Laptop{
    int lid;
    char title[20];
    double price;
};

int main(){

    struct Laptop l1={101,"AAA",45000};

    struct Laptop l2=l1;

    struct Laptop l3;

    l3.lid=l1.lid;
    //l3.title=l1.title;
    l3.price=l1.price;


}