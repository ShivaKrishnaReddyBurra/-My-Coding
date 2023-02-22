#include<stdio.h>
int main()
{
    int n,last_digit,first_digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    first_digit=n;
    last_digit=n%10;
    while(first_digit>=10)
    {
        first_digit=first_digit/10;
    }
    printf("the sum of first and last digit is = %d",last_digit+first_digit);
}
