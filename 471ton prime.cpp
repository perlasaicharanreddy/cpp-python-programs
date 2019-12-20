#include<stdio.h>
/*
i to n prime numbers
*/
int main(){
	int n,c,j,k;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		c=0;
		for(j=i,k=1;k<=j;k++){
		if(j%k==0) c++;			
		}
		if(c==2)
		printf("%d\n",i);
		
	}
}
