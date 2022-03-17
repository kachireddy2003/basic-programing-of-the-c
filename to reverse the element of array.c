//to reverse the elements of the array
#include<stdio.h>
int main()
{
	int a[5],n,i;
	printf("enter the size of the arry");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the reversed elements are ");
	for(i=n-1;i>=0;i--)
	printf("%d",a[i]);
	}