#include<stdio.h>
int main(){
	for(int i=10;i>=1;i--){
		for(int j=1;j<=20;j++){
			printf("%d x %d =%d\n",i,j,i*j);
		}
		printf("\n\n");
	}
}
