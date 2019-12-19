#include<stdio.h>
int main(){
	int i=1;
	f:
	printf("%d\n",i);
	i++;
	if(i!=21)
	goto f;
}
