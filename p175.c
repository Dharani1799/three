#include<stdio.h>
void main()
{
    char a[100],b[100],c[1000]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i,j,k=0,c=0,m=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++);
    
    for(k=i;k<i+j;k++)
    {
        a[k]=b[m];
        m++;
    
    }
    a[k]='\0';
    for(k=0;k<i+j;k++)
    {
        for(m=0;c[m]!='\0';m++)
        {
            if(a[k]==c[m])
            {
                c++;
                c[m]='&';
            }
        }
    }
    if(c==26)
    {
        printf("complementary");
    }
        else
        {
            printf("non complementary");
        }
    
    }
