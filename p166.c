#include<stdio.h>
int main()
{
    int a,b,flag1=1,flag2=1,i,j,gcd,k;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        flag1=flag1*i;
    }
    for(j=1;j<=b;j++)
    {
        flag2=flag2*j;
    }
    for(k=1;k<=flag1&&k<=flag2;k++)
    {
        if(flag1%k==0&&flag2%k==0)
        gcd=k;
    }
    printf("%d",gcd);
}
