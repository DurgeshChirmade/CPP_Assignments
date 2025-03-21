#include<stdio.h>

int *max(int num1,int num2){
    int *nums1,*nums2;
    if(num1>num2){
        nums1=&num1;
        return nums1;
    }
    else{
        nums2=&num2;
        return nums2;
    }
}
int main(){

    int num1,num2;

    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    int *ptr=max(num1,num2);

    printf("maximum number = %d",*ptr);

}