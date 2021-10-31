#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	if(n<=0){
		printf("So can tim: 0");
	}else if(n <=1){
		printf("So can tim: 1");
	}else if(n<=2){
		printf("So can tim: 2");
	}else{
		int x1=0,x2=1,x3=1;
		for(;x2+x3<=n;){// x2+x3: la so tiep theo se tim duoc
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("So can tim: %d",x3);
	}
}
