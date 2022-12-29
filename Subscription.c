#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>30)
        printf("YES
");
        else 
        printf("NO
");
    }
}