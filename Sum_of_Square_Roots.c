#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float s=0,q;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
q=sqrt(i);
s=s+q;
}
printf("%0.2f",s);
}