#include<stdio.h>
int swap1(int a,int b);
int swap2(int*a,int*b);
int main()
{
	int a,b;
	printf("Enter two number for variable a and b:");
	scanf("%d%d",&a,&b);
	printf("\n Swaping using Call by Value");
	printf("\n a=%d \n b=%d",a,b);
	swap1(a,b);
	printf("\n Swaping using Call by Reference");
	printf("\n a=%d \n b=%d",a,b);
	swap2(&a,&b);
}
int swap1(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n Value after swaping a=%d \n b=%d",a,b);
}
int swap2(int *a,int *b)
{
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
	printf("\n Value after swaping a=%d \n b=%d",*a,*b);
}