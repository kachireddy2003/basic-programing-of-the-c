//to print SMALL element in the array elements 
#include<stdio.h>
int main()
{
	int n,i,a[10],s;
	printf("enter the SIZE OFarray elements");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		s=a[i];
	}
		printf("%d small is \n",s);
}