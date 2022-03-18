//C PROGRAM TO PRINT THE ARRAY ELEMENTS AT THE END OF THE ARRAY
#include<stdio.h>
int main()
{
	int n,a[10],e,i;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the size of an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the inserting element of the arry");
	scanf("%d",&e);
	n++;
	a[n-1]=e;
	printf("the elements ofter the interstion");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	}
