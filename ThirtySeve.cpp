#include<iostream>

int Add(int a,int b){
    return a+b;
}
int Add(float a,float b){
    return a+b;
}
int Add(double a,double b){
    return a+b;
}
int Add(int a,float b){
    return a+b;
}
int main(){
    int ia=10,ib=20;
    Add(ia,ib);

    float fa=10.20,fb=20.10;
    Add(fa,fb);
}