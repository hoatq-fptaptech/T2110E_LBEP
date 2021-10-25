#include<stdio.h>
int main(){
	int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d",&n);
	if(n>=2 && n<=7){
		printf("Day la thu %d",n);
	}else if(n==8){
		printf("Day la chu nhat");
	}else{
		printf("khong phai ngay trong tuan");
	}
	
	// dung swith case
	switch(n){
		case 2:printf("Day la thu %d",n);break;
		case 3:printf("Day la thu %d",n);break;
		case 4:printf("Day la thu %d",n);break;
		case 5:printf("Day la thu %d",n);break;
		case 6:printf("Day la thu %d",n);break;
		case 7:printf("Day la thu %d",n);break;
		case 8:printf("Day la chu nhat",n);break;
		default: printf("khong phai ngay trong tuan");
	}
}
