#include<stdio.h>
int main()
{
 	int a=0,b=1,number,nextnumber,i;
 	printf("Enter the number upto were you want to print fibonacci series \n");
 	scanf("%d",&number);
 	printf("Fibonacci series is : %d,%d,",a,b);
 	nextnumber=a+b;
 	for(i=3;nextnumber<number;i++)
 	{
 		printf("%d,",nextnumber);
 		a=b;
 		b=nextnumber;
 		nextnumber=a+b;
	}
	return 0;
}
