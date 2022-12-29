#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int r,p,w,e=0;
        scanf("%d",&r);
        p=r;
        while(r!=0)
        {
        w=r%10;
        e=e*10+w;
        r=r/10;
        }
        if(p==e)
        {
        c++;
        }
    }
    if(c==n)
    printf("1");
    else
    printf("0");
}