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
	
	if(a == 0){ // neu viet a = 0 -> luon luon dung
		if(b==0){
			if(c==0){
				printf("Pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
			}
		}else{
			int x = -c/b;// se co sai sot khi chia khong het
			printf("Pt co nghiem: %d",x);
		}
	}else{
		int delta = b*b - 4*a*c;
		if(delta < 0){
			printf("pt vo nghiem");
		}else{
			if(delta == 0){
				int x12 = -b/(2*a);
				printf("Pt co nghiem kep: %d",x12);
			}else{
				int x1 = (-b+sqrt(delta))/(2*a);
				int x2 = (-b-sqrt(delta))/(2*a);
				printf("Nghiem thu nhat: %d\n",x1);
				printf("Nghiem thu hai: %d\n",x2);
			}
		}
	}
}
