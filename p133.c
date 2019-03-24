#include <stdio.h>
int main()
{
    int n,m,a[n],b[n],i,f=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
   for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            if(b[i]==m)
            {
                printf("yes..he can reach %d",m);
                f=1;
            }
        }
    }
    if(f!=1)
        printf("no..he can't reach %d",m);
	
}
