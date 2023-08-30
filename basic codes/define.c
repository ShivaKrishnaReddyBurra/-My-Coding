#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int n;
    p("Enter the number :");
    s("%d",&n);
    p("the number is : %d",n);
    return 0;
}