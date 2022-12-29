#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a*2;
    y=b*5;
    if(x>y)
    printf("Chocolate
");
    else if(x<y)
    printf("Candy
");
    else if(x==y)
    printf("Either
");
}
}
