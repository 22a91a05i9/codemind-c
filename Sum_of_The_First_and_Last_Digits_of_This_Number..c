#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int r,q,w,e=0,z;
        scanf("%d",&r);
        w=r%10;
        while(r!=0)
        {
        q=r%10;
        e=e*10+q;
        r=r/10;
        }
        z=e%10;
        printf("%d
",z+w);
    }
}