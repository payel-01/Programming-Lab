#include<stdio.h>
int main(){
    int n,a,r,rev=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    a=n;
    for(;n!=0;n=n/10){
        r=n%10;
        rev=rev*10+r;
    }
    printf("The reverse number %d is: %d",a,rev);
    return 0;
}