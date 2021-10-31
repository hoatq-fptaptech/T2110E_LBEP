#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	float S=0;
	for(int i=1;i<=n;i++){
		S+=(float)1/i;
	}
	printf("S = %f",S);
}

