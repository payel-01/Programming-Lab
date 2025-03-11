#include<stdio.h>
int main()
 {
  int n,m,count=0;
  printf("Enter the No :");
  scanf("%d",&n);
  m=n;
 for(;n!=0; count++)
   n=n/10;
 printf("The no of digit present in the no %d is %d",m,count);
 return 0;
 }
