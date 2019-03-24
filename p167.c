#include <stdio.h>
void main()
{
    char s[100000];
    int i,c,flag=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            c++;
        }
    }
    for(i=2;i<c;i++)
    {
       if(c%i==0)
       {
           flag=1;
           printf("no");
           break;
       }
    }
    if(flag==0)
    {
        printf("yes");
    }

}
