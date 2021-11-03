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
	int sole = 0;
//	for(int i=0;i<n;i++){
//		if(arr[i]%2!=0){
//			sole = arr[i];
//		}
//	}
	for(int i = n-1;i>=0;i--){
		if(arr[i]%2!=0){
			sole = arr[i];
			break;
		}
	}
	if(sole != 0){
		printf("So le cuoi cung: %d",sole);
	}else{
		printf("Mang ko co so le nao ca");
	}
}
