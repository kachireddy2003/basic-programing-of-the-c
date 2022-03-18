//to insert the arry element into specfic postion
#include<stdio.h>
int main()
{
	int n,a[10],p,e,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter elements of the array");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the postion of the element");
	scanf("%d",&p);
	printf("enter the element of the array");
	scanf("%d",&e);
	n++;
	for(i=n;i>p;i--)
	    a[i-1]=a[i-2];
	a[p-1]=e;
	printf("after inserting elements are ");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}