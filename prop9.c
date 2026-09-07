#include<stdio.h>

int main()

{
    int total, hour, minute, sec;

    printf("Enter time in seconds:");
    scanf("%d", &total);

    hour= total / 3600;

    total= total % 3600;

    minute= total/60;
    sec= total % 60;

    printf("%d Hour, %d minute and %d second", hour, minute, sec);

    return 0;


}