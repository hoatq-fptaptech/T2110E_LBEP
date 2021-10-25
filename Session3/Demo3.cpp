#include <stdio.h>
int main(){
	int a,b;
	printf("nhap A:");
	scanf("%d",&a);
	printf("nhap B:");
	scanf("%d",&b);
	switch(a+b){
		case 1: printf("Dang chuyen den tong dai vien");break;
		case 2: printf("Dang chuyen den CSKH");break;
		case 3: printf("Dang chuyen den bao cao su co");break;
		case 4.5: printf("Dang chuyen den ky thuat vien");break;
		default: printf("Vui long nhap 1 hoac 2 hoac 3");
	}
	
	char ch;
	printf("Nhap 1 ky tu:");
	scanf("%c",&ch);
	switch(ch){
		case 'x':{
			printf("Close");
			break;
		}
		case 'y': printf("open");break;
		default: printf("New");
	}
}
