#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,a=0,b=0;
	scanf("%d",&n);
	if(i==0)
	printf("0 ");
	i++;
	if(i==1)
	printf("0 ");
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		
		{
		    a=a+2;
			printf("%d ",a);
		
		}
		else
		{
            b=b+1;
			printf("%d ",b);
		}
	}
}