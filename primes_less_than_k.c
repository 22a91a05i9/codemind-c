#include<stdio.h>
int main()
{
    int n,i,arr[100],c,k,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]<=k)
    {
        for(j=1;j<=arr[i];j++)
        {
           if(arr[i]%j==0)
           {
               c++;
           }
        }
    }
        if(c==2)
        {
            m++;
        }
    }
    printf("%d",m);
}
