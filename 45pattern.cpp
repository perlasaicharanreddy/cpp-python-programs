#include<stdio.h>
/*
12345
1234
123
12
1
*/
int main(){
	for(int r=1;r<=5;r++){
		for(int c=1;c<=(6-r);c++){
			printf("%d",c);
		}
		printf("\n");
		
	}
}
