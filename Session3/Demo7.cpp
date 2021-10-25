#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	if(a>=b){
		if(b==0){
			printf("Error..");
		}else{
			printf("Ket qua: %f",(float)a/b);
		}
	}else{
		printf("Ket qua: %d",a*b);
	}
}
