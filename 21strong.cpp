#include<stdio.h>
int main(){
	int n,sum=0,rem;
	scanf("%d",&n);
	int fact,t=n;
	while(n>0){
		fact=1;
		rem=n%10;
		{ 
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}
		}
		sum+=fact;
		n=n/10;
	}
	if(sum==t)
	printf("strong");
	else
	printf("not strong");
	
	
}
