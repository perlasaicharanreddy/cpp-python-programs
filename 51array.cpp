#include<stdio.h>
int main(){
	int a[20],n,ele;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&ele);
	for(int i=0;i<n;i++){
	if(a[i]==ele){
	printf("element found");
	break;
	}
	 if(i==n)
    printf("element not found");
    }
   
	  
	
	

	
}
