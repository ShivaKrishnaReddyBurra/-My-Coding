#include<stdio.h>
int main()
{
	
	char line;
	FILE *file;
	file=fopen("MY FILE.txt","w");
	if(file==NULL)
	{
		printf("File is not created\n");
		return 0;
	}
	printf("Enter the data to file and give '.' for stop\n");
	printf("------------------------------------------\n");
	while( (line=getchar()) != '.')
	{
		fputc(line,file);
	}
	fclose(file);
	printf("\n\nFile is created..... ");
	return 0;
}
