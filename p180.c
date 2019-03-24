#include<stdio.h>
int main()
{
    int n,d=0,b=1,r,m=2;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        d=d+r*b;
        n=n/10;
        b=b*2;
    }
    while(d>m)
    {
        m=m*2;
    }
    if(d<m)
    {
        printf("%d",m);
    }
}
