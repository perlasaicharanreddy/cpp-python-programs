#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z') printf("upper");
	else if(c>='A'&&c<+'Z') printf("lower");
	else if(c>='0'&&c<='9') printf("digit");
	else printf("special symbol");
}
