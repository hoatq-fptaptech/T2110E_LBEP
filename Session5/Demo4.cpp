#include <stdio.h>
int main(){
	int n;
	INPUT_N:printf("Nhap n=");// dat 1 label la INPUT_N
	scanf("%d",&n);
	if(n>0){
		printf("da nhan duoc 1 so nguyen duong");
	}else{
		goto INPUT_N;// quay chuong trinh ve vi tri cho label INPUT_N de thuc hien => nghiem cam dung trong lap trinh hien dai
	}
}
