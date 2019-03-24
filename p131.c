#include <stdio.h>
void main() 
{
	int n,rem,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    rem=n%10;
	    s=s+rem;
	    n=n/10;
	}
	if(s%2==0)
	{
	    printf("E..that is even");
	}
	else
	{
	    printf("O..that is odd");
	}

}
