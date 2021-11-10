#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	int *p;
	p = &x;
	printf("Dia chi cua x: ");
	std::cout << p; // gia tri cua p la dia chi 1 o nho
	x++;//11
	printf("\nx = %d\n",x);
	(*p)++; 
	printf("\nx = %d\n",x);
}
