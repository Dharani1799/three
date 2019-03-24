#include<stdio.h>
#include<conio.h>
void main()
{
    int s[100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    i=0;
    j=i+1;
    while(i<n-1)
    {
        if(s[j]%s[i]==0)
        {
            printf("%d ",s[j]);
        }
        j++;
        i++;
    }
    }
