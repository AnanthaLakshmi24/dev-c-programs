#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
			}
		}
	}
}
