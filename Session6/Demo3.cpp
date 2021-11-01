#include <stdio.h>
int main(){
	int arr[10]; // khai bao 1 tap hop 10 so nguyen
	// nhap 10 so bat ky tu ban phim
	for(int i=0;i<10;i++){ // duyet mang
		printf("Nhap pt thu %d:",i);
		scanf("%d",&arr[i]); // scanf("%d",&x);
	}
	int h = arr[0]; // gia dinh h la max
	for(int i=1;i<10;i++){
		if(arr[i]>h){
			h = arr[i];
		}
	}
	printf("Max: %d",h);
	
	// neu yeu cau: 1 mang co n phan tu
}
