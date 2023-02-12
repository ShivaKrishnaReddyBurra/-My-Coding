#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("Enter the number 1 : ");
	scanf("%d",&num1);
	printf("Enter the number 2 : ");
	scanf("%d",&num2);
	max=num1>num2?num1:num2;
	while(1)
	{
		if( (max%num1==0&&max%num2==0) )
		{
			printf("The LCM of the %d and %d is %d ",num1,num2,max);
			break;
		}
		max++;
		
	}
	return 0;
}
