#include<stdio.h>
int main()
{
    int n,i,arr[100],m,k,mini=1000,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=m&&arr[i]<=k||arr[i]>=k && arr[i]<=m)
        {
            if(mini>arr[i])
            {
                mini=arr[i];
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",mini);
    }
}
