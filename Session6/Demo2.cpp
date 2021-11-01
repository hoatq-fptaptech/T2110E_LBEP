#include<stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap a=");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Nhap b=");
		scanf("%d",&b);
	}while(b<=a); // ra day se dc 2 so a < b
	
	for(int i=a;i<=b;i++){
		int count = 0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("SNT: %d\n",i);
		}
	}
}
