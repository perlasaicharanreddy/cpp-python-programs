#include<stdio.h> 
int main(){
	int r,m1,m2,m3,sum;
	float avg;
		sum=0,avg=0;
		scanf("%d %d %d %d ",&r,&m1,&m2,&m3);
		sum=m1+m2+m3;
		avg=float(sum)/3;
		printf("%d %f %f",r,sum,avg);
	return 0;
}
