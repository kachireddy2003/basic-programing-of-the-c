// to sum and average elements of the array
#include<stdio.h>
int main()
{
	int n,a[5],i,sum=0;
	 float avg ;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the values of the array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	avg=sum/n;
	printf("%d\n",sum);
	printf("%f\n",avg);
	}