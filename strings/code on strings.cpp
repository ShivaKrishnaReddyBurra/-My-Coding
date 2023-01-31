#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int a,b;
	printf("Enter the string : ");
	gets(s1);
	a = strlen(s1);
	strcpy(s2,s1);
	strrev(s1);
	 b = strcmp(s2,s1);
	if(b==0)
		printf("The given string %s is a plaindrome",s1);
	else 
		printf("Given string %s is not a plaindrome",s2);
	return 0;
	
}
