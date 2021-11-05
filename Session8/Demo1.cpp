#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach %d so nguyen:",n);
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d =",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap gia tri cua x=");
	scanf("%d",&x);
	int m=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			m=arr[i];
			break;
		}
	}
	if(m==x){
		printf("Tat ca cac gia tri deu >= %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<x && arr[i]>m){
				m = arr[i];
			}
		}	
		printf("So tiem can %d trong danh sach la: %d",x,m);
	}
	
	
}
