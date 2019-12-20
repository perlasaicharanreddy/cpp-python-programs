#include<stdio.h>
int main(){
	int a[20],n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(int i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
	printf("\n%d",sum);
	
}
