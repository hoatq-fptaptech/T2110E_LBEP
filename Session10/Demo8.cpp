#include <stdio.h>
#include <stdlib.h> // thu vien cap phat dong
int main(){
//	int n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		printf("Nhap pt thu %d: ",i);
//		scanf("%d",&arr[i]);
//	}
//	// muon them 5 so nua vao mang
//	
// su dung con tro de tao mang linh dong
	int *p;
	// gia su ban dau mang co 10 so nguyen
	// cap 10 o nho
	p = (int *)malloc(10 * sizeof(int));
	for(int i=0;i<10;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&p[i]);
	}
	// chuyen mang thanh 15 phan tu ma ko mat gia tri cu
	p = (int *)realloc(p,15*sizeof(int));
	for(int i =10;i<15;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&p[i]);
	}
}
