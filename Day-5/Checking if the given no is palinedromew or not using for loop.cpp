#include<stdio.h>
int main()
{
    int n,b,r,rev=0;
    printf("Enter the number to check if the given number is Palindrome:");
    scanf("%d",&n);
    b=n;
    for(;n!=0;n=n/10)
    {
        r=n%10;
        rev=rev*10+r;
    }
    if(rev==n)
    {
        printf("The given no %d is Palindrome",b);
    }
    else
    {
        printf("The given no %d is not Palindrome",b);
    }
    return 0;
}
