//delete the array element for staing of the array
#include<stdio.h>
int main()
{
	int n,a[10],i;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the elements of an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	n--;
	for(i=0;i<n;i++)
	a[i]=a[i+1];// bythis line we are inter changing the elemnts and we are removing the elements
	printf("after deleting elements are");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
}
//logic
//n--;
//for(i=0;i<n;i++);
//a[i]=a[i+1]
//0=1;1=2;2=3;