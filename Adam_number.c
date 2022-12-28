#include<stdio.h>
int main()
{
int n,r,s=0,q,m,t,z=0,p,k;
scanf("%d",&n);
p=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
q=p*p;
m=q;
k=s*s;
while(k!=0)
{
t=k%10;
z=z*10+t;
k=k/10;
}
if(m==z)
printf("True");
else
printf("False");
}