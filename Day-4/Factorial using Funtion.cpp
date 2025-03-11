#include<stdio.h>
int fact(int n)
{
	int b=1;
	for(int i=1;i<=n;i++)
	 {
		 b=b*i;
	 }
	 printf("\n The factorial of %d is %d",n,b);
}
int main()
{
	int n,a;
	printf("Enter No for Factorial:");
	scanf("%d",&n);
	fact(n);
	
}