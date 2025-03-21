#include<stdio.h>

int main(){

    int a[5],pos;

    for(int i=0;i<5;i++){
        printf("Enter Data : ");
        scanf("%d",&a[i]);
    }

    printf("Enter position you want to delete : ");
    scanf("%d",&pos);

    for(int i=0;i<5;i++){
        if(pos==5){
            a[pos-1]=0;
            break;
        }

        a[pos-1]=a[i];
    }

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}