#include <stdio.h>
int main(){
	int arr[15] = {0,1,2,3,5,8,13,21,34,55,89,144,172,189,200};
	int low = 0;
	int high = 14;
	int search = 5;// 4
	int flag = 0;
	while(low <= high){
		int mid = (low + high)/2;
		if(search == arr[mid]){
			flag = 1;
			printf("tim thay tai vi tri: %d\n",mid);
			break;
		}else if(search < arr[mid]){
			high = mid - 1;
		}else if(search > arr[mid]){
			low = mid + 1;
		}
	}
	if(flag == 0){
		printf("404 not found!");
	}
}
