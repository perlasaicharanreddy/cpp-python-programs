#include<stdio.h>
int main(){
	int n,rem,sum=0;
	scanf("%d",&n);
	int t=n;
	while(n>0){
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==t)
	printf("armstrong");
	else
	printf("not armstrong");
}
