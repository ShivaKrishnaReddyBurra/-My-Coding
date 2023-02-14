#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int rem,num,result,temp;
	printf("Enter the three digit number : ");
	scanf("%d",&num);
	temp=num;
	result=0;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		result+=rem*rem*rem;
	}
	if(temp==result)
		printf("The given %d number is an armstrong number",temp);
	else 
		printf("the given %d number is not a armstrong number",temp);
		
		return 0;
	
}
