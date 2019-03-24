#include <stdio.h>
void main()
{
    int b[100],n,m,bin=0,rem,c=0,rem2,power=1,mul,a[100],i=0,j,k=0;
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
        a[i]=rem2;
        bin=bin/10;
        i++;
    }
    for(j=i;j>0;j--)
    {
        b[k]=a[j];
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(b[i]==1)
        {
            c++;
            if(c==2)
            {
                printf("%d",i);
            }
        }
     }
   }  
     
