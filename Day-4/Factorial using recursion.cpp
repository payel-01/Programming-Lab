#include<stdio.h>
int fact(int n)
{ 
    if(n!=0)
    {
    	return n=n*fact(n-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int n,a;
	printf("Enter No for Factorial:");
	scanf("%d",&n);
	a=fact(n);
	printf("\n The factorial of %d is %d",n,a);
}