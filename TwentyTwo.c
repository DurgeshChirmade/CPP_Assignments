#include<stdio.h>

int date(int *dd,int *mm,int *yyyy){

    printf("Enter Day : ");
    scanf("%d",dd);

    printf("\nEnter Month : ");
    scanf("%d",mm);

    printf("\n Enter year : ");
    scanf("%d",yyyy);

}

int main(){

    int dd,mm,yyyy;

    date(&dd,&mm,&yyyy);
    
    printf("%d / %d / %d",dd,mm,yyyy);
}