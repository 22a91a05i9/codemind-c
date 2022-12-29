#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k1=0,k2=0,a,b;
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
		    a=pow(2,(k1+1));
			printf("%d ",(a-1));
			k1++;
		
		}
		else
		{
			b=pow(3,(k2+1));
			printf("%d ",(b-1));
			k2++;
		}
	}
}