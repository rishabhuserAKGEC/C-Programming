#include<stdio.h>
/*Question :
Initialize an Integer array of 10 elements in main().
Pass the entire array to a function modify().
In Modify() multiply each element of array by 3
Return the control to main() function and print the new array elements in main()
*/

int modify(int x)
{
	
		return x * 3;
	
}
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	printf("\nEntered elements of array are :\n");
	for(i=0; i<10; i++)
	{
		printf("%d, ",arr[i]);
		
	}
	
	printf("\n");
	for(i=0; i<10; i++)
	{
		printf("%d, ",modify(arr[i]));
		
	}
	
	
	return 0;
}
