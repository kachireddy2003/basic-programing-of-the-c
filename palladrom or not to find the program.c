//this the program to find the pallamdrom or not
//logic
//while(n!=0)
//r=n%10
//rev=rev*10+r
//n=n/10
//rev == pall of n then given num ber is palldrom number 
#include<stdio.h>
int main()
{
	int n,rev=0,r,pal;
	n=5565;
	pal=n;
	while (n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==pal)
	printf ("%d the given number is pall drom number",pal);
	else
	printf ("%d the given number is not a palldrom number",pal);
}