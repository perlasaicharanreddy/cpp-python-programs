#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	switch(n){
		case 0:printf("sunday");break;
		case 1:printf("monday ");break;
		case 2:printf(" tueaday");break;
		case 3:printf("wednesday ");break;
		case 4:printf("thursday");break;
		case 5:printf("friday");break;
		case 6:printf("saturday");break;
	}
}
