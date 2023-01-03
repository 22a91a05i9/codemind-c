#include<stdio.h>
int main()
{
	int i,j,n,m,c=0;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		   c=c+a[i][j];
	}
			printf("%d ",c);
			c=0;
	}
	}