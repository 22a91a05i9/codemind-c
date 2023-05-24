#include<stdio.h>
int main()
{
  int n,d,s=0,sq;
  scanf("%d",&n);
  sq=n*n;
  while(sq!=0)
  {
      d=sq%10;
      sq=sq/10;
      s+=d;
  }
  if(s==n)
  {
      printf("Neon Number");
  }
  else
  {
      printf("Not Neon Number");
  }
}