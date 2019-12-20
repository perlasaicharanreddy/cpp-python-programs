#include<stdio.h>
/*1to 10 even tables*/
int main(){
	for(int i=1;i<=10;i++){
		if(i%2==0){
		for(int j=1;j<=20;j++){
			printf("%d x %d =%d\n",i,j,i*j);
		}
		printf("\n\n");
	}
   }
}
