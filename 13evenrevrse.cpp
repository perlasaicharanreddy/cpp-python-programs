#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0) n=n-1; 
	for(int i=n;i>=0;i--){
		if(i%2==0)
		 printf("%d\n",i);
	}
}
