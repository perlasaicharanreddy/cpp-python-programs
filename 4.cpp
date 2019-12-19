#include<stdio.h> 
int main(){
	int r,m1,m2,m3,n;
	float sum,avg;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		sum=0,avg=0;
		scanf("%d %d %d %d ",&r,&m1,&m2,&m3);
		sum=m1+m2+m3;
		avg=sum/3;
		printf("%d %f %f",r,sum,avg);
		
	}
	return 0;
}
