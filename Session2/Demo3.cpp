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
			float x = -(float)c/b; // bien c van la int, nhung tai thoi diem nay, gia tri cua c (vi du 15) se thanh 15.0000
			printf("Pt co nghiem: %f",x);
			//printf("c = %d",c)
		}
	}else{
		int delta = b*b - 4*a*c;
		if(delta < 0){
			printf("pt vo nghiem");
		}else{
			if(delta == 0){
				float x12 = -(float)b/(2*a);
				printf("Pt co nghiem kep: %f",x12);
			}else{
				float x1 = (-b+sqrt(delta))/(2*a);
				float x2 = (-b-sqrt(delta))/(2*a);
				printf("Nghiem thu nhat: %f\n",x1);
				printf("Nghiem thu hai: %f\n",x2);
			}
		}
	}
}
