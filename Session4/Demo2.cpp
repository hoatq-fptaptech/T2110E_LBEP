#include <stdio.h>
int main(){
	int S,n;
	printf("Nhap so tien muon gui:");
	scanf("%d",&S);
	printf("Nhap so nam muon gui tien:");
	scanf("%d",&n);
	int i=0;// nh�n vi�n theo d�i vviec gui lai
	while(i<n){
		S += S*8/100;
		i++;
	}
	printf("So tien thu duoc sau cung: %d",S);
}
