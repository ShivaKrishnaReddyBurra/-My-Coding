#include<stdio.h>
void main()
{
    int num,rev,rem,given;
    printf("Enter the number: ");
    scanf("%d",&num);
    given=num;
    rev=0;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        rev=rev*10+rem;
    }
    if(rev==given)
        printf("%d is a palindrome",given);
    else
        printf("%d is not a palindrome",given);
}
