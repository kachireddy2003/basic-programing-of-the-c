// to print the fatorial of a given number 
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter the number that need to factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    printf("%d\n%d",n,f);
}
//fact=fact*i_logic