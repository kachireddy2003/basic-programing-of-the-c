#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of lines ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}


}
/*enter the no of lines 5
11111
2222
333
44
5*/
