#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,sum2=0,p,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum2+=arr[i];
    }
    if(sum2>sum)
    {
      p=sum2-sum;
      printf("%d",p);
    }
    else
    {
        t=sum-sum2;
        printf("%d",t);
    }
}
