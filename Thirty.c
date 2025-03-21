#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter number of subjects : ");
    scanf("%d",&n);

    int *ptr=(int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        printf("Enter subject marks : ");
        scanf("%d",&ptr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ptr[i];
    }
    int avg=sum/n;
    printf("Average Marks : %d",avg);
}