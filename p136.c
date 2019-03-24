#include <stdio.h>
int main(void) 
{
    int a[10],n,k,i,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==k)  
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("yes %d",c);
    }
    else
    {
        printf("no");    
    }

}
