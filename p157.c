#include <stdio.h>
void main()
{
    int n,m,bin=0,r,c=0,r2,power=1,mul,a[100],i=0,j;
    scanf("%d %d",&n,&m);
    mul=n*m;
    while(mul>0)
    {
        r=mul%2;
        bin=bin+r*power;
        mul=mul/2;
        power=power*10;
    }
    while(bin>0)
    {
        r2=bin%10;
        a[i]=r2;
        bin=bin/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a[j]==1)
        {
            printf("%d",j+1);
            break;
        }
    }
}
