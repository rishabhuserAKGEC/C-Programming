#include<stdio.h>

int main()
{
	FILE *fp;
	char str[]="Hello World !",ch;
	int i;
	fp=fopen("newfile.txt","a");
	if(fp==NULL)
	{
		printf("\nError in Opening the file .");
		return 1;
	}
	else
	{
		i=0;
		//Writing characters to the file word by word using fputc.
		while(str[i]!='\0')
		{
			fputc(str[i],fp);
			printf("%c",str[i]);
			i++;
			
		}
		// Reading the Characters from the file until EOF
		while(ch=fgetc(fp)!=EOF)
		{
			printf("%c",ch);
		}
		

	}
	fclose(fp);
	return 0;
}
