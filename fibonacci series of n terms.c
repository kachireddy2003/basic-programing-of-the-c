//to print the first n tems of the fibonicc serices
#include<stdio.h>
int main()
{
	int n,f1,f2,f3,count;
	printf("enter the n value ");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("%d\t%d\t",f1,f2);
	f3=f1+f2;
	count=3;
	while(count<=n)
	{
	printf("%d\t",f3);
	f1= f2;
	f2=f3;
	f3=f1+f2;
	count++;
	}
}