#include<stdio.h>

int main()
{
    int a[50], n, large, i;
    printf("\n How many numbes to enter?:");
    scanf("%d" , &n);

    printf("\n Enter your number:");

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }

    large= a[0];

    for (i=1; i<n; i++)
    {
        if (a[i]> large)
        {
            large= a[i];

        }
    }
     printf("Largest number is:%d" , large);
     
     return 0;
}