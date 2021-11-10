#include <stdio.h>
int main(){
	int arr[4][3];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Ma tran sau khi nhap:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
		//	printf("%d\t",arr[i][j]);
			printf("%5d",arr[i][j]); // moi 1 gia tri se chiem 5 o tren man hinh
		}
		printf("\n");
	}
}
