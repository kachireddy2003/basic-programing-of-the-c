//to read and display array elements 
#include<stdio.h>
int main()
{
	int a[5],n,i;
	printf("enter the size of the array elements  ");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("entered elements are");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}