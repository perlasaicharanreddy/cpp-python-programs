#include<stdio.h>
#include<stdlib.h>
int main(){
	int bal=7000,minbal=5000,avbal,ch,temp;
	while(1){
		printf("\n1.Deposit\t2.wiithdraw\t3.showbalance\t4.exit\n");
		printf("enter yr choice");
		scanf("%d",&ch);
		switch(ch) {//for(;;)
		case 1:
			   printf("enter amount to deposit\n");
			   scanf("%d",&temp);
			   bal=bal+temp;
			   printf("rs%d is deposited",temp);
			   break;
		case 2:
			  avbal=bal-minbal;
			  printf("enter amount to withdraw\n");
			  scanf("%d",&temp);
			  if(temp<=avbal){
			  	bal=bal-temp;
			  	printf("plz collect cash\n");
			  }
			  else 
			  printf("invalid balance\n");
			  break;
			
	    case 3:
	    	  avbal=bal-minbal;
	    	  printf("available balance=%d\n",avbal);
			  printf(" balance=%d\n",bal);    	  
	    	  break;
	    case 4:
	         	exit(0);
	    }
	}
}
