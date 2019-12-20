#include<stdio.h>
int main(){
	int a[20],n,ele,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	if(a[i]==ele){
		c++;
   }
   if(c!=0)
   printf("found");
   else 
   printf("not found");

	
}
