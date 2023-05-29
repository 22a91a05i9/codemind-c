#include<stdio.h>
int main()
{
    int n,i,arr[100],p=0,l=0,c=0,j;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            l++;
            p+=arr[i];
        }
    }
    avg=(float)p/l;
    printf("%.2f",avg);
}
