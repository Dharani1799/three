#include<string.h>
int main()
{
    int i,l,k,r,c=0;
    char s[10];
    scanf("%s",s);
    scanf("%d",&r);
    l=strlen(s);
    for(i=0;i<l;i+r)
    {
        s[k]=s[i];
        k++;
        c++;
    }
    for(k=0;k<c;k++)
    {
        printf("%c",s[k]);
    }
  

}
