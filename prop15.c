#include<stdio.h>

int main()
{
    int a[50], n, i;
    printf("\n Enter how many numbers?");
    scanf("%d", &n);

    printf("\n Type yor numbers");

    for(i=0; i<n; i++)
    {
    
    scanf("%d", &a[i]);
    }
    

    for(i=0;i<n ; i++)
    {
        printf("\n Your numbers are:%d ", a[i]);
    }
    
    return 0;
}