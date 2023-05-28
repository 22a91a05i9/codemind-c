#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,se=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    se=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            printf("True");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}