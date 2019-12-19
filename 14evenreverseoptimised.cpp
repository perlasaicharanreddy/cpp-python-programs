#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0) n=n-1; 
    while(n>=2)
	{
	    printf("%d\n",n);
	    n=n-2;
	}
}
