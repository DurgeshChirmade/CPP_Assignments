#include<iostream>

int Multiply(int a,int b=1,int c=1,int d=1,int e=1){

    return a*b*c*d*e;
}

int main(){

    Multiply(10,20,30,40,50);
    Multiply(10,20,30,40);
    Multiply(10,20,30);
    Multiply(10,20);
    Multiply(10);

}