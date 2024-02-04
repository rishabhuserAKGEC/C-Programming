#include<stdio.h>

int main()
{
	FILE *fp;
	char str[]="Again ...",ch;
	int i,pos,npos;
	fp=fopen("newfileprog.txt","a+");//File Opened in Append + read mode
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
			i++;
			
		}
		//ftell - to get the current position 
		pos=ftell(fp);
		// fseek -to set the current position to 0 index
		npos=fseek(fp,0,SEEK_SET);
		
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		

	}
	fclose(fp);
	return 0;
}
