#include<stdio.h>
int main(){
	int x =10;
	
	if(x > 5){
		printf("x > 5\n");
		printf("xin chao");
	}
	
	if(x>5){
		printf("A");
	}else if(x > 6){
		printf("B");
	}else if(x > 10){
		printf("C");
	}else{
		printf("D");
	} 
	
	if(x > 5){
		// A
	}else{
		if(x > 6){
			// B
		}else{
			if(x > 10){
				//C
			}else{
				//D
			}
		}
	}
}
