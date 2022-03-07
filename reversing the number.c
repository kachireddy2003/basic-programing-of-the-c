//reversing the number 
//loglic is 
//r=n/10
//rev=rev*10+r
//n=n/10
//byappling the wlilw loop
#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter the n number that should be reversed");
    scanf("%d",&n);
    while (n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }
    printf("%d",rev);
}