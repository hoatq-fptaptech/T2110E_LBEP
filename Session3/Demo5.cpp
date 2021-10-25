#include <stdio.h>
int main(){
	int S = 4000;
	int ls = 8;
	S += S*ls/100;
	S += S*ls/100;
	S += S*ls/100;
	S += S*ls/100;
	printf("Neu khong dau tu vao hoc hanh thi se co so tien: %d", S);
}
