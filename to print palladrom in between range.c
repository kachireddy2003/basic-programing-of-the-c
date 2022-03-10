//to plalamdrom numbers between the range
//logic;
//by using if and wlile loop
#include<stdio.h>
int main()
{
    int max,min,n,r,rev,pal,i;
    n=1;
    min=1;
    max=55;
    for(i=min;i<=max;i++)
    {
        i=n;
        pal=n;
        rev=0;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
            if(pal==rev)
            printf("%d",pal);
        
    }
}