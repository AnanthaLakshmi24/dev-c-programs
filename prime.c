#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Prime");
	}
	else
	{
		printf(" Not Prime");
	}
}
