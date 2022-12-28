#include<stdio.h>
#include<math.h>
int main()
{
    int n,w=0,s,q,z,m,b;
    scanf("%d",&n);
    s=n%1000;
    q=n/1000;
    b=s;
    while(b!=0)
    {
        z=b%10;
        w=w*10+z;
        b=b/10;
    }
    printf("%d%d",q,w);
}