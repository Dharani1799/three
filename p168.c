#include<stdio.h>
#include<conio.h>

int main()
{
   char s[1000];
    int i,n,j;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='1' && s[i]<='9')
        {
            n=s[i]-48;
            for(j=0;j<n;j++)
            {
                printf("%c",s[i-1]);
            }
        }
    }
}
