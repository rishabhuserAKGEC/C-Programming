#include<stdio.h>
/*	PASCAL TRAINGLE
		1  		i=1
	   1 1  	i=2
	  1 2 1		i=3
	 1 3 3 1	i=4
	1 4 6 4 1	i=5
*/
int main()
{
	int i,j,s,c,n;
	printf("\nEnter the number of rows :\n");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++)//rows
	{
		for (s=1; s<=n-i; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			if (i==1 || j==1)
			{
				c=1;
			}
			else
			{
				c= (c*(i-j+1)/(j-1));
			}
			printf("%2d",c);//%2d means each character will take 2 spaces.
		}
		printf("\n");
	}
}
