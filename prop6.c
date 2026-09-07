#include<stdio.h>

int main()
{
    float a,b; 

    printf("ENTER YOUR FARENHEIT VALUE ");
    scanf("%f",&b);

    a= (b - 32) * 5/9;

    printf(" Your celcius value is %.2f", a);
     
    return 0;



}