//to print big element in the array elements 
#include<stdio.h>
int main()
{
	int n,i,a[10],b;
	printf("enter the SIZE OFarray elements");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>b)
		b=a[i];
	}
		printf("%d big is \n",b);
}