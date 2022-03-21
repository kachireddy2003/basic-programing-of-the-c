// to delet an array element from end of the array
#include<stdio.h>
int main()
{
	int n,a[5],i;
	printf("enter the size of the array element");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("updated array elements are");
	for(i=0;i<n-1;i++)
	printf("%d",a[i]);
}