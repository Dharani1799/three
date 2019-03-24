#include<stdio.h>
void main()
{
	char s[200],s1[200];
	int c,d,e=0,f,g,h,i,j=0,k;
	gets(s);
	gets(s1);
	c=strlen(s);
	d=strlen(s1);
	for(i=0;i<c;i++)
	{
		if(s[i]==s1[j])
		{
			s[i]='\0';
			j++;
			e++;
		}
	}
	for(i=0;i<e;i++)
	{
		if(s[i]!='\0')
		printf("%c",s[i]);
	}
}
