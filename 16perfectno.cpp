#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	 
	while(i<n){
		if(n%i==0)
		sum+=i;
		i++;
      	}
	   if(sum==n)
	   printf("%d is perfect\n",n);
	   else 
	printf("%d is not perfect\n",n);
}
