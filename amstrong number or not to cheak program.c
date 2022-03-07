// to sAY THE GIVE NUMBER IS AMSTRONG NUMBER OR NOT 
//LOGLIC
//R=N%10
//SUM=SUM+R*R*R
//N=N/10
#include<stdio.h>
int main()
{
    int n, r,sum=0,armstrong;
    n=154;
    armstrong=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n = n/10;
    }
    if(armstrong==sum)
    printf("the given number is amstrong number");
    else
    printf("the given number is not armstrong number");
}