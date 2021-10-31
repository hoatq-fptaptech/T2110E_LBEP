#include <stdio.h>
int main(){
	int n;
	printf("Nhap so can kiem tra:");
	scanf("%d",&n);
	int count=0,i=1;
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai so nguyen to",n);
	}
}
