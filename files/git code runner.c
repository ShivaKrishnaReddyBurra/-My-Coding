#include<stdio.h>
int main()
{
	char filename[100]="git code runner.c";
	/*In above statement, you have to type the name of the programe on which  you were working insteaded of the git code runner.c
	git code runner.c is my programe name */ 
	char ch[30];
	FILE *fp;
	fp= fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\nfile unable to open ");
		return 0;
	}
	while( (fgets(ch,29,fp))!='\0' )
	{
		printf("%s",ch);
	}
	fclose(fp);
	return 0;
}
