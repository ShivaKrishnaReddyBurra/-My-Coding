#include<stdio.h>
void main()
{
	int a,i,j,sp;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf("%d ",j);
		}
		for(sp=1;sp<(3*i+1);sp++)
		{
			printf(" ");
		}
		for(j=j-1;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");	
	}
	
}
