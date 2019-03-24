#include<stdio.h>
int main()
{
    int a,b,flag1=1,flag2=1,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        flag1=flag1*i;
    }
    for(j=1;j<=b;j++)
    {
        flag2=flag2*j;
    }
    flag1=flag1/flag2;
    printf("%d",flag1);
}
