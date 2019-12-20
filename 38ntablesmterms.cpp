/*1 to m tables upto m terms*/
#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d x %d =%d\n",i,j,i*j);
		}
		printf("\n\n");
   }
}
