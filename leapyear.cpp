#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	bool leap=false;
	if(n%4==0){
		leap=true;
		if(n%100==0){
			if(n%400==0) leap=true;
			else
			leap=false;
		}
	}
	if(leap==true){
		printf("leap");
	}
	else
	printf("not leap");
}
