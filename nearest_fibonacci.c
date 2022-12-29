#include<stdio.h>
#include<math.h>
int main()
{
    int n,f=0,s=1,t,a;
    scanf("%d",&n);
    t=f+s;
    while(t<=n)
    {
        f=s;
        s=t;
        t=f+s;
    }
    if((abs(t-n)>abs(s-n)))
    printf("%d",s);
    else if(abs(t-n)==abs(s-n))
    printf("%d %d",s,t);
    else
    printf("%d",t);
	}