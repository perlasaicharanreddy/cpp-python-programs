#include<stdio.h>
/*
1
12
123
1234
12345
*/
int main(){
	for(int r=1;r<=5;r++){
		for(int c=1;c<=r;c++){
			printf("%d",c);
		}
		printf("\n");
		
	}
}
