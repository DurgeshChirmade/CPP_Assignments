#include<iostream>
using namespace std;

void Swap(int &ra,int &rb){
    ra=ra+rb;
    rb=ra-rb;
    ra=ra-rb;
}

int main(){
    
    int a=10,b=20;

    Swap(a,b);

    cout<<a<<" "<<b;

}