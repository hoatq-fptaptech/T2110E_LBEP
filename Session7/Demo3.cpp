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
	int count = 0, total = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0 && i%2==0){
			total += arr[i];
			count++;
		}
	}
	if(count > 0){
		printf("TB cong cac so le o vi tri chan: %f",(float)total/count);
	}else{
		printf("Khong co so le o vi tri chan nao ca");
	}
}
