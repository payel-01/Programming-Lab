#include<stdio.h>
int main()
    {
  int i,j;
  for(i=1;i<=4;i++)
    {
    for(j=1;j<=7;j++)
      {
      if(i==2 && j==4)
        {
        break;;
        }
        if(i==3 && j==2|| j==2 || j==4)
         {
          continue;
          }
          if(i==4 && j==1|| j==2 || j==3 || j==4 || j==5)
            {
            continue;
            }
            printf("*");

            }
    printf("\n");
            }
            return 0;
            }

