#include <stdio.h>
int main(){
	int n;
	printf("nhap vi tri muon tim:");
	scanf("%d",&n);
	if(n<=0){
		printf("So can tim: 0");
	}else if(n <=2){
		printf("So can tim: 1");
	}else{
		int x1=0,x2=1,x3=1;
		for(int i=3;i<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("So can tim: %d",x3);
	}
}
