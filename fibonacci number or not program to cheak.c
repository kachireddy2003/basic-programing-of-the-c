//to know the given number is fibonacci number or not
// fibnoacci number means sum of before two terms is is next term
//lodic is f1=f2;f2=f3;f3=f1+f2; upto n is equall to the f3
#include<stdio.h>
int main(){
	int n,f1,f2,f3;
	printf("enter the n value");
	scanf("%d",&n);
	f1=0;
	f2=1;
	if(f1==0)
	printf("the given number is fibnoic number");
	f3=f1+f2;
	while(f3<n)
	{
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
	if(f3==n)
	printf("the given number isfibnoic number");
	else
	printf("th egiven number is not fibnoic number ");
}