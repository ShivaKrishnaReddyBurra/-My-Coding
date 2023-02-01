#include<stdio.h>
void main()
{
	int number,sum,product,rem,given;
	printf("Enter the number: ");
	scanf("%d",&number);
	given=number;
	sum=0;
	product=1;
	while(number!=0)
	{
		rem=number%10;
		sum=sum+rem;
		product=product*rem;
		number=number/10;
	}
	if(sum==product)
		printf("The given number %d is a spynumber",given);
		/* if sum of each digit in the number is equal to product of the each digit in the number then it is called as spynumber */ 
	else
		printf("The given number %d is not a spynumber",given);
}
