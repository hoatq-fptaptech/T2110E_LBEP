#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr;
	printf("chuong trinh nhap diem thi sinh vien:\n");
	int flag = 0;
	int totalSize = 0 ;// tong so sinh vien da duoc nhap diem
	do{
		int n;
		printf("Nhap so luong sinh vien can nhap diem thi:");
		scanf("%d",&n);
		totalSize += n;
		if(totalSize == n){ // nhap lan dau
//			arr = (int *)malloc(n*sizeof(int)); // cap n o nho - kich thuoc mang hien tai la n <=> int arr[n];
			arr =  (int *)calloc(n,sizeof(int));// arr[i] = 0;
		}else{
			arr = (int *)realloc(arr,totalSize*sizeof(int)); // cap n o nho - kich thuoc mang hien tai la n <=> int arr[n];
		}
		
		for(int i=totalSize-n;i<totalSize;i++){ // nhap diem cua sv chua duoc nhap
			printf("nhap diem thi sinh vien:");
			scanf("%d",arr+i);
		}
		printf("Ban co muon bo sung them sinh vien hay khong? (1 - Co, 0- Khong)");
		int q;
		scanf("%d",&q);
		if(q!= 0){
			flag = 1;	
		} else{
			flag = 0;
		}
	}while(flag);
	
	printf("Danh sach diem thi sinh vien sau khi nhap:\n");
	for(int i=0;i<totalSize;i++){
		printf("%d\n",*(arr+i)); // arr[i] <=>*(arr+i)  &arr[i] <=> arr +i
	}
	free(arr);
}
