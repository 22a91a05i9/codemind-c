#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,k1=1,k2=0,a,b;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		
		{
		    a=pow(2,(k1));
			printf("%d ",a);
			k1++;
		
		}
		else if(i==1)
		{
		    printf("0 ");
		}
		else if(i%2!=0 && i>1)
		{
			b=pow(3,(k2));
			printf("%d ",(b));
			k2++;
		}
	}
}