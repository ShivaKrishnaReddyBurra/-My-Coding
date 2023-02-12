#include<stdio.h>
int main()
{
	int rows,i,j,c,space;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		printf(" ");	
		for(space=1;space<=rows-i;space++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
				c=1;
			else
				c=c*(i-j+1)/j;
			printf("%4d",c);
		}
		printf("\n");
	}
	return 0;
}
