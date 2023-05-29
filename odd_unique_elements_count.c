#include<stdio.h>
int main()
{
    int n,i,arr[100],j,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[i]=-1;
            }
        }
    }
    for(k=0;k<n;k++)
    {
        if(arr[k]!=-1)
        {
            if(arr[k]%2==1)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}
