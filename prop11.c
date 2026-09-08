#include<stdio.h>

int main()
{
    char ch;
    printf("Enter your alphabet:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' )
{
    ch= ch-32;

    printf("your alphabet in upper case:%c ", ch);
}

    else
    {
        printf(" The entered charecter is not a lower case alphabet");
    }
    return 0;

}