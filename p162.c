#include <stdio.h>
void main()
{
    char str[10000];
    int i,j,n,k,f=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<n;i++)
    {
        scanf("%s\n",str);
    }
    for(i=1;i<k;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' ||str[j]=='o' || str[j]=='u'|| str[j]=='A'|| str[j]=='E'|| str[j]=='I'|| str[j]=='O'|| str[j]=='U')
        {
            f=1;
            break;
        }
        }
        if(f==0)
        {
            break;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
