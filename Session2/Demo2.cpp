#include <stdio.h>
int main(){
	int a,b,c;// khai bao 1 luc 2 bien so nguyen a b -> yeu cau may tinh cap 3 o nho 16 bit
	printf("nhap so thu nhat:");
	scanf("%d",&a);
	
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	
	printf("nhap so thu ba: ");
	scanf("%d",&c);
	
	if(a > b){ // day la cu phap re nhanh, ko phai lenh thuc thi
		// yes
		if(a > c){
			printf("Max = %d",a);
		}else{
			printf("Max = %d",c);
		}
	}else{
		if(b > c){
			printf("Max = %d",b);
		}else{
			printf("Max = %d",c);
		}
	}
}
