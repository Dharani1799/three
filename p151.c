#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,c=0;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='b')
        c++;
    }
 
    if(c==l)
    printf("yes");
    else if(c==(l-1))
    printf("yes");
    else
    printf("no");
    
}
