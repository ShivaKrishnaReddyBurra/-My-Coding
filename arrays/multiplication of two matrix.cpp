#include<stdio.h>
void main()
{
	int r,c,p,q,i,j,k,a[10][10],b[10][10],d[10][10];
	printf("Enter the rows and columns of the matrix 1 : ");
	scanf("%d%d",&r,&c);
	printf("Enter the rows and columns of the matrix 2 : ");
	scanf("%d%d",&p,&q);
	if(c!=p)
		printf("Matrix multiplication is not possible\n");
	printf("Enter the %d elements of the matrix:",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The element of the matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the %d elements of the matrix:",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The element of the matrix is :\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("The Multiplication matix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<q;j++)
		{
			d[i][j]=0;
			for(k=0;k<c;k++)
			{
				d[i][j]+=a[i][k]*b[k][j];
			}		
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
}
