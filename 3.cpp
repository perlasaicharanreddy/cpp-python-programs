#include<stdio.h> 
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf(a==b&&b==c?"all are equal":a>b&&a>c ? "a is big ":b>c? "b is big ": "c is big");
}
