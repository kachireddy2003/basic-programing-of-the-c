//INSERTING THR ELEMENT IN THE ARRAY at beging 
#include<stdio.h>
int main()
{
	int n,a[5],e,i;
	printf("enter the size of the array elements ");
	scanf("%d",&n);
	printf("enter the elements of te array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the insreting element");
	scanf("%d",&e);
	n++;
	for(i=n;i>1;i--)
	a[i-1]=a[i-2];
	a[0]=e;
	printf("after revering array elements are");
	for (i=0;i<n;i++)
	printf("%d",a[i]);
}