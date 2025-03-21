#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"How many subjects : ";
    cin>>n;

    int *ptr=new int[n];

    int sum=0;
    for(int i=0;i<n;i++){
        cout<<"Enter Marks of subject : ";
        cin>>ptr[i];
        sum+=ptr[i];
    }

    int avg=sum/n;

    cout<<"Average of "<<n<<" subjects marks are "<<avg;

    delete []ptr;


}