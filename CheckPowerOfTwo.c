#include<stdio.h>
void main(){
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num!=1){
//		if(num==1){
//			num/=2;		
//		}
		if((num%2)!=0){
			break;
		}	
		num/=2;	
		printf("%4d",num);
	}
	
	if(num==1){
		printf("\nnumber is power of 2.");
	}else{
		printf("\nnot power of 2.");
	}
}
