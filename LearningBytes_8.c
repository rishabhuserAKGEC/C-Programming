#include<stdio.h>
/*
File:
A file is a place on the disk where a group of related data is stored simply defined as "Collection of related information"

Types of Files:
1. Text File (or) Sequential File
2. Binary File (or) Random File

What are the basic file operation?
a) Naming a file
b)Opening a file
c) Reading from file
d)Writing to a file
e)closing the file

File Pointer: It is a pointer to a structure which contains the information about the file
Syntax: FILE *fp;
This pointer is used to open a file with a file mode like
fp=fopen("emp.dat","w");
First Argument => file name/path
Second Argument => file mode


Action Item for you:
Q1: What are different modes of opening a file?
Q2: Write "Hello World!" to an existing file at the end of file?

Answer-1:
Different Modes of Opening the files are:
r -Open the text file for reading
w -Open the text file for Wriring 
r+ -Open the text file for reading and Writing 
w+ -Open the text file for writing and reading
rb - Opening a binary file for reading
wb -Creating a bianry file for writing
r+b -Opening the binary file for reading and writing
w+b- creating the binary file for writing and Reading
a - Adding Content to the text file
a+ -Opening for reading and appending
ab - Appending to binary file
a+b -Opening for Reading and appening to binary file

*/

//Answer-2
int helloworldFile(char *filename,char *message)
{
	FILE *fp;
	//Opening the file in append mode.
	fp=fopen(filename,"a");
	
	if (fp==NULL)
	{
		printf("\n	File Does Not Exist");
		return 1;
	}
	//fprintf to write the message to the file
	fprintf(fp,"%s\n",message);
	printf("Message Recorded Successfully");
	
	//Close the File
	fclose(fp);
}
#include<stdio.h>
int main()
{
  //Call the function for writing in existing file
  helloworldFile("newrecord.txt","Hello World !");
  
  return 0;
}



