#include <stdio.h>
void main()
{
    int n,m,bin=0,rem,c=0,rem2,power=1,mul;
    scanf("%d %d",&n,&m);
    mul=n*m;
    while(mul>0)
    {
        rem=mul%2;
        bin=bin+rem*power;
        mul=mul/2;
        power=power*10;
    }
    
    while(bin>0)
    {
        rem2=bin%10;
        if(rem2==1)
        {
            c++;
        }
        bin=bin/10;
    }
    printf("%d",c);
}
