#include<stdio.h>
#include<stdlib.h>
//do using strcmp function for strings instead of character
int main(){

    char *ptr=(char*)malloc(sizeof(char)*5);

    for(int i=0;i<5;i++){
        printf("Enter alphabet : ");
        scanf(" %c",&ptr[i]);
    }

    int t;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(ptr[i]>ptr[j]){
                t=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=t;
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%c ",ptr[i]);
    }
}