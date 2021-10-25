#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap so thu nhat:");
	scanf("%d",&a);
	
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	
	printf("nhap so thu ba: ");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c > a){
		int C = a +b +c;
		float P = (float)C/2;
		float S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf("Chu vi: %d\n",C);
		printf("Dien tich: %f\n",S);
	}else{
		printf("Day khong phai 3 canh tam giac");
	}
}
