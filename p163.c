#include <stdio.h>
void main()
{
    int n,k,a[1000],i,f=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    
}
