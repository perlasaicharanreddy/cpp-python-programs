#include<stdio.h>
#include<math.h>
int main(){
	int n,rem,sum=0;
	scanf("%d",&n);
	int t=n;
	int c=0,r;
	while(n>0){
		n=n/10;
		c++;
	}
	int t2=t;
	while(t>0){
		rem=t%10;
		sum+=pow(rem,c);
		t=t/10;
	}
	if(sum==t2)
	printf("armstrong");
	else
	printf("not armstrong");
}
