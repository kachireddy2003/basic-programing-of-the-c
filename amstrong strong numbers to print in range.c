//to print the amsrtrong numbers the between the given max and min 
//logic
//use foer loop
//for(i=min;i<=max;i++)
//n=i
//n= amstronr number 
//do again while loop
#include<stdio.h>
int main()
{
    int max,min,r,n,sum,i,amstrong;
    min = 1;
    max = 1000;
    for(i=min;i<=max;i++)
    {
        n =i;
        amstrong=n;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
            
        }
         if (amstrong == sum)
         printf("%d\n",sum);
    }
}