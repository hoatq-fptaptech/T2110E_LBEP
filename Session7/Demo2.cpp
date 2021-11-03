#include <stdio.h>
int main(){
	int n;// kich thuoc mang ( array size)
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap so x can tim kiem:");
	scanf("%d",&x);
	
	int i=0; // su dung bien dem de kiem tra
	for(;i<n;i++){
		if(arr[i] == x){
			printf("%d nam trong danh sach vua nhap",x);
			break;
		}
	}
	if(i>=n){
		printf("%d khong ton tai trong danh sach",x);
	}
}
