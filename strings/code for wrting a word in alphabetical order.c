#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char s[25],temp;
	printf("Enter the word : ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Word after alphabetical order arrangement is : ");
	for(i=0;i<l;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
