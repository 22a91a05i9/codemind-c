#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int X,Y;
        scanf("%d%d",&X,&Y);
        if(X>Y)
        printf("LOSS
");
        else if(X<Y)
        printf("PROFIT
");
        else if(X==Y)
        printf("NEUTRAL
");
        }
}