#include<stdio.h>
int main()
 {
  int n,b,r,rev=0;
  printf("Enter a number to check if it is Armstrong no or not: ");
  scanf("%d",&n);
  b=n;
  for (; n !=0;n=n/10)
    {
     r=n%10;
     rev=rev+(r*r*r);

    }
 if(rev==b)
 {
  printf("The given number %d is a armstrong number",b);
 }
 else
 {
  printf("The given number %d is not armstrong number",b);
 }
 return 0;
 }


