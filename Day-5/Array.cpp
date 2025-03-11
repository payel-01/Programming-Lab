#include<stdio.h>
int main()
{
  int a[8];
  printf("Enter the elements of the array\n");
  for(int i=0;i<8;i++)
    {
    printf("For a[%d]\n",i);
    scanf("%d",&a[i]);
    }
  printf("The elements of the array a are:\n");
  for(int i=0;i<8;i++)
    {
     printf("%d \t",a[i]);
    }
  int min=a[0];
  for (int i=0;i<8;i++)
    {
     if (a[i]<min) {
       min=a[i];
     }
    printf("%d\t",min);

  }
     return 0;
 }