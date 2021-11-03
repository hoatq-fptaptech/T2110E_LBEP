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
	int m = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			m = arr[i];
			break;
		}
	}
	if(m ==0){
		printf("Mang khong co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]< m){
				m = arr[i];
			}
		}
		printf("So duong nho nhat: %d",m);
	}
}
