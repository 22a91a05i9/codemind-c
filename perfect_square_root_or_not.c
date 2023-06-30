#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("True");
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n==i*i)
        {
            flag=1;
            printf("True");
        }
    }
    if(flag==0)
    {
        printf("False");
    }
    
}