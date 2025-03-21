#include <stdio.h>

void accept(int a[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Data : ");
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}

void dispadd(int a[3][3],int b[3][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int a[3][3],b[3][3];

    accept(a);
    printf("Transpose Matrix : \n");
    display(a);

    accept(b);
    printf("Addition of Matrix : \n");
    dispadd(a,b);

}