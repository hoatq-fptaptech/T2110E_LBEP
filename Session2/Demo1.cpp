#include <stdio.h>
int main(){
	int x;
	x = 10;
	printf("x = %d\n",x); // le ra in ra man hinh: x = %d --> tim 1 so nguyen dua vao vi tri %d --> x = 10
	x = 10 + 20;
	printf("x = %d\n",x); // x = 30
	
	float y;
	y=3.14;
	printf("y = %f\n",y);// %f -> tim 1 so float dua vao vi tri cua %f
	
	double z = 100.13; // vua khai bao bien vua gan gia tri ban dau
	printf("z = %ld\n",z);
	
	char ch ;
	ch = 'a';
	printf("ch = %c\n",ch);
	
	printf("x = %d va y = %f\n",x,y);
	printf("y = %f va x = %d \n",y,x);
	
}
