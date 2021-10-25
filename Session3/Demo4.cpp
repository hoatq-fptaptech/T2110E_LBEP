#include <stdio.h>
int main(){
	int x;
	printf("Nhap so tu ban phim:");
	scanf("%d",&x);
	if(x<10000 && x>0){
		int y=0;
		y = y*10 + x%10;
		x/=10; // x = x/10;
		// lan 2 - khi x co 2 chu so
		if(x!=0){
			y=y*10+x%10;
			x/=10;
		}
		// lan 3- khi x co 3 chu so
		if(x!=0){
			y=y*10+x%10;
			x/=10;
		}
		// lan 4- khi x co 4 chu so
		if(x!=0){
			y=y*10+x%10;
			x/=10;
		}
		printf("So dao nguoc: %d",y);
	}else{
		printf("Nhap so khong hop le");
	}
	
	
}
