#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
        	c=1;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                     c++;
                     arr[j]=-1;
                }
            }
        if(c!=0)
        {
            printf("%d %d ",arr[i],c);
        }
}
    }
}

