#include <stdio.h>
int main(){
	int S,n;
	printf("Nhap so tien muon gui:");
	scanf("%d",&S);
	printf("Nhap so nam muon gui:");
	scanf("%d",&n);
//	int i=0;
//	while(i<n){
//		S+= S*8/100;
//		i++;
//	}

	for(int i=0;i<n;i++){
		S+= S*8/100;
	}

//	for(int i=0;i<n;S+=S*8/100,i++);
	printf("So tien thu duoc: %d",S);
}
