#include<stdio.h>
int main()
{
    int n,m,i,j,arr[100][100],s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
}
