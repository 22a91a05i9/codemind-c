#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='1')
        {
        	c=c+1;
		}
    }
    printf("%d",c);
    
}