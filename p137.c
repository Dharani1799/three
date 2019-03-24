#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,bin=0,power=1,r,r2,i=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin=r*power+bin;
        n=n/2;
        power=power*10;
    }
    while(bin>0)
    {    ++i;
        r2=bin%10;
        if(r2==1)
        {
            printf("%d",i);
            break;
        }
        bin=bin/10;
    }
    
}
