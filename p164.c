#include <stdio.h>
void main()
{
    int n,k,a[1000],i,flag=0,c;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
            printf("%d",a[i]);
            break;
        }
        else if(a[i]<k)
        {
          flag=0;
          c=a[i];
        }
    }
    if(flag==0)
    {
        printf("%d",c);
    }

}
