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
	// sap xep mang n so nguyen
	for(int i=0;i<n-1;i++){ // i < n-1
		// ky vong la day dc 1 so max (trong dam con lai) ve cuoi
		for(int j=0;j<n-1-i;j++){
			if(arr[j] > arr[j+1]){ // khi ma j = 4 -> j+1 = 5 arr[5] ko ton tai
				// thuat toan swap
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
