#include <stdio.h>
int main(){
	int S,S1;
	printf("Nhap so tien muon gui:");
	scanf("%d",&S);
	printf("Nhap so tien muon nhan:");
	scanf("%d",&n);
//	int i=0;
//	while(i<n){
//		S+= S*8/100;
//		i++;
//	}
	int i;
	for(i=0 ; S<S1 ;S+= S*8/100){
		i++;
	}

//	for(int i=0;i<n;S+=S*8/100,i++);
	printf("So nam Can gui: %d",i);
}
