#include <stdio.h>
int main(){
	int S,S1;
	printf("Nhap so tien muon gui:");
	scanf("%d",&S);
	printf("Nhap so tien muon nhan:");
	scanf("%d",&S1);
	int i=0;// nh�n vi�n theo d�i vviec gui lai
	while(S<S1){
		S += S*8/100;
		i++;
	}
	printf("So tien thu duoc sau cung: %d",i);
}
