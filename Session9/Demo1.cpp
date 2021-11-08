#include <stdio.h>
#include "functions.h"
int main(){
	int m = 5, n = 3;
	int k = m*n-m/n;// trong bieu thuc nay, m va n la cac gia tri , bieu thuc tinh toan xogn cung la gia tri
	int h = TinhTong(m,n);// de su dung ham TinhTong, phai truyen cho no 2 gia tri so nguyen
	printf("Tong 2 so %d + %d = %d\n",m,n,h);
	
	printf("Tong 12 + 11 = %d\n",TinhTong(12,11));
	int x = PhepNhan(12,15);
}
