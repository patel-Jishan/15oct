#include<stdio.h>
int main(){
	
	int aakib,jishan,yahya,noman;
	scanf("%d%d%d%d",&aakib,&jishan,&yahya,&noman);
	if(aakib<jishan){
		if (aakib<yahya){
		if	(aakib<noman){
				printf("aakib");
				
			}
			else{
				printf("noman");
				
			}
		}
		else{
			if(yahya<noman){
				printf("yahya");
				
			}
			else{
				printf("noman");
			}
			
		}
	}
	else if (jishan<yahya){
		if(jishan<noman){
			printf("jishan");
			
		}
		else{
			printf("noman");
		}
		
	}
	else if(yahya<noman){
		printf("yahya");
		
	}
	else{
		printf("noman");
	}
}
