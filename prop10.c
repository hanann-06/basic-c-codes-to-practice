#include<stdio.h>

int main()
{
     int a,b;
     printf("\n Enter two numbers:");
     scanf("%d %d", &a, &b);

     if (a>b)
     printf("\n Larger number is: %d", a);

     else
     printf("\n Larger number is: %d", b);

     return 0;

}