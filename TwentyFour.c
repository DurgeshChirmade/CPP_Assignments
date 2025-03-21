#include<stdio.h>

int compare(int a[5]){

    int max=a[0],min=a[0];

    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d %d",max,min);
}
int main(){

    int a[5],max,min;

    for(int i=0;i<5;i++){
        printf("Enter Data : ");
        scanf("%d",&a[i]);
    }

    compare(a);

}