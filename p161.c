#include<stdio.h>
void main()
{
char a[1000],b[1000];
int n,i,j,c=0,d=0;
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
d++;
}
for(j=0;b[j]!='\0';j++)
{
if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u')
c++;
}
if(d>=1&&c>=1)
printf("yes");
else
printf("no");
}
