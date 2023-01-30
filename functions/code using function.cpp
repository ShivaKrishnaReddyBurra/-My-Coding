#include<stdio.h>
void rectangle();
void printline();
main()
{
	printline();
	rectangle();
	printline();
}
void rectangle()
{
	int l,b,area,perimeter;
	printf("Enter the length and breadth: ");
	scanf("%d %d",&l,&b);
	area=l*b;
	printf("area is %d",area);
	perimeter=2*(l+b);
	printf("Perimter is %d",perimeter);
}
void printline()
{
	printf("\n");
	int i;
	for(i=1;i<30;i++)
	{
		printf("-");
	}
	printf("\n");
}
