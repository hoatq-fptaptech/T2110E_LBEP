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
	
	if(a+b>c){
		if(b+c > a){
			if(a+c > b){
				// day la 3 canh tam giac
				int C = a +b +c;
				int P = C/2;
				int S = sqrt(P*(P-a)*(P-b)*(P-c));
				printf("Chu vi: %d\n",C);
				printf("Dien tich: %d\n",S);
			}else{
				printf("Day khong phai 3 canh tam giac");
			}
		}else{
			printf("Day khong phai 3 canh tam giac");
		}
	}else{
		printf("Day khong phai 3 canh tam giac");
	}
	
}
