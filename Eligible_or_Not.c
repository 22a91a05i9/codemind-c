#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int XX,YY,AA;
        scanf("%d%d%d",&XX,&YY,&AA);
        if(AA>=XX && AA<YY)
        printf("YES
");
        else
        printf("NO
");
    }
}