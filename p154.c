#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,k,d,c=0;
    char s[10];
    scanf("%s",s);
    scanf("%d",&d);
    l=strlen(s);
    
    for(i=0;i<l;i++)
   {
      if((i%d)!=0)
      {
          s[i]=s[i]-32;
      }
      else
      s[i]=s[i];
      
       printf("%c",s[i]);
      
       
    }

}
