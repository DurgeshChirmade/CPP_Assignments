#include<stdio.h>

int main(){

    int f1,f2,f3,n;

    printf("Enter fibonnaci series length : ");
    scanf("%d",&n);

    f1=0;
    f2=1;
    printf("%d ",f1);
    printf("%d ",f2);

    for(int i=3;i<=n;i++){
        f3=f1+f2;

        printf("%d ",f3);

        f1=f2;
        f2=f3;
    }
}