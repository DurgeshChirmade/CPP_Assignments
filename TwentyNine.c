#include<stdio.h>

int main(){

    char str[50]="a a b c cd deioud d";
    char ch;

    printf("Enter your character to search : ");
    scanf("%c",&ch);

    int res=0,spc=0;

    for(int i=0;i<20;i++){
        if(str[i]==ch){
            res++;
        }
        if(str[i]='\t'){
            spc++;
        }
    }
    printf("Occurrences of %d is %d",ch,res);
    printf("\nSpace is %d",spc);


}