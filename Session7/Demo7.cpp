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
	
	int count = 0, max = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]>0){
			count+=arr[i];
			if(count > max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	printf("Tong so duong lien tiep nhieu nhat: %d",max);	
}
