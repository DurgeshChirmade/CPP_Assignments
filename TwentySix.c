#include <stdio.h>

int main()
{

    int a[10], pos, key;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Data : ");
        scanf("%d", &a[i]);
    }

    printf("Enter position to which you want to add : ");
    scanf("%d", &pos);

    printf("Enter element you want to insert : ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
    {
        if (pos==i-1)
        {
            a[pos] = a[i]; // 1,2,3,4,5 //Do it properly.
        }
    }
}