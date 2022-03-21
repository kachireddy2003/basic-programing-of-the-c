// to update the array elements menas changing the value sof the array elements
#include<stdio.h>
int main()
{
    int n,i,a[i],p,e;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the postion of element");
    scanf("%d" ,&p);
    printf("enter the element ofn the array");
    scanf("%d",&e);
    a[p-1]=e;    // logic changes acconding to the problem
    printf("enter the updated array  elements ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    
    
}