#include<stdio.h>
int main()
{
    int u,c;
    float sr,b;
    scanf("%d",&u);
    {
    if(u<=199)
    c=1.20*u;
    else if(u>=200 && u<400)
    c=1.50*u;
    else if(u>=400 && u<600)
    c=1.80*u;
    else if(u>=600)
    c=2*u;
    }
    {
    if(c>400)
    sr=.15*c;
    else
    sr=100;
    }
    b=c+sr;
    printf("%.2f",b);
}