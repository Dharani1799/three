#include<stdio.h>
#include<conio.h>
int main()
{
   char a[100],b[100];
   int i,j=0,c;
   gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            b[j]=a[i];
            j++;
        }
        if(a[i]==' ')
        {
            for(c=j-1;c>=0;c--)
            {
                printf("%c",b[c]);
                b[c]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
        
}
