#include<stdio.h>
#include<math.h>
int main()
{
    int n,ld,fd,sn,c,d,r;
    scanf("%d",&n);
    d=log10(n)+1;
    ld=n%10;
    fd=n/pow(10,(d-1));
    c=n-((fd*pow(10,(d-1)))+ld);
    sn=(ld*pow(10,(d-1)))+fd+c;
    printf("%d",sn);
}