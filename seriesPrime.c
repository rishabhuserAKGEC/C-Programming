#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
    int n,s;
    printf("Enter the end of the series number");
    scanf("%d",&n);
    for(int i = 2 ; i<=n ; i++)
    {
        s = prime(i);
        if (s==0)
        {
            continue;
        }
        else{

        printf("%d ",s);
        }
    }
}
int prime(int a)
{
    int k=0;
    for(int i = 2 ; i<=a/2 ; i++)
    {
        if(a%i==0)
        {
            k = 1;
            break;
        }
        
    }
    if(k==0)
    {
        return a;
    }
    
}