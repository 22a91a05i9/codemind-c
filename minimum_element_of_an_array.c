#include<stdio.h>
int main()
{
	int i,n,h=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
int	min=a[0];
for(i=0;i<n;i++)
	{
	if(a[i]<min){
	    min=a[i];
	}

	}
		printf("%d",min);
}