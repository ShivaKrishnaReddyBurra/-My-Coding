#include<stdio.h>
void main()
{
	int a[50],n,i,j,t,r,s,m;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	printf("Enter the elements of the array = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements after sorting: \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	if(n%2==0)
	{
		r=n/2;
		s=r+1;
		m=(a[r-1]+a[s-1])/2;
		printf("median = %d",m);
	}
	else
	{
		r=n/2;
		m=a[r];
		printf("median = %d",m);
	}
	
}
