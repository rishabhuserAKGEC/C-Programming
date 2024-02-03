#include<stdio.h>
/*Question :
Initialize an Integer array of 10 elements in main().
Pass the entire array to a function modify().
In Modify() multiply each element of array by 3
Return the control to main() function and print the new array elements in main()
*/

// Function modify-Value through pointer 
int modify(int *ptr)
{
	int i;
	for(i=0; i<10; i++)
	{
		*(ptr+i)=*(ptr+i)*3;
	}
	
	
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr,i;
	printf("\nEntered elements of array are :\n");
	for(i=0; i<10; i++)
	{
		//Display all array elements 
		printf("%d, ",arr[i]);
		
	}
	modify(arr);
	
	printf("\n");
	for(i=0; i<10; i++)
	{
		printf("%d, ",arr[i]);
		
	}
	
	
	return 0;
}
