#include<stdio.h>
/*
1
22
333
4444
55555
*/
int main(){
	for(int r=1;r<=5;r++){
		for(int c=1;c<=r;c++){
			printf("%d",r);
		}
		printf("\n");
		
	}
}
