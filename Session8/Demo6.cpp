#include <stdio.h>
int main(){
	int arr[5] = {5,-8,3,2,7};
	
	for(int i=1;i<5;i++){
		int j = i - 1; // nhin` ve so phia truoc
		int gtkt = arr[i];
		
		for( ; j>=0 && gtkt < arr[j] ;j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = gtkt;
	}
	
	printf("Sau khi sap xep:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
