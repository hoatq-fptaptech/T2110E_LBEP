#include <stdio.h>
void danhsachluachon(){
	printf("===================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh tong\n");
	printf("3. Tinh hieu\n");
	printf("4. Tinh thuong\n");
	printf("5. Thoat\n");
	printf("===================");
	printf("Chon:");
}
void menu(){
	printf("\tTinh toan\n");
	danhsachluachon();
}
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int multi(int a,int b){
	return a*b;
}
double div(int a,int b){
	if(b==0) return NULL;
	return a/b;
}

int main(){
	int a=NULL,b=NULL;
	int m,out;
		menu();
	do{
		out=0;
		scanf("%d",&m);	
		switch(m){
			case 1: {
				printf("Nhap a=");
				scanf("%d",&a);
				printf("Nhap b=");
				scanf("%d",&b);
				break;
			}
			case 2: {
				if(a!=NULL && b!= NULL){
					printf("Tong 2 so: %d\n",sum(a,b));
				}
				break;
			}
			case 3: {
				if(a!=NULL && b!= NULL){
					printf("Hieu 2 so: %d\n",sub(a,b));
				}
				break;
			}
			case 4: {
				if(a!=NULL && b!= NULL){
					printf("Tich 2 so: %d\n",multi(a,b));
				}
				break;
			}
			case 5: {
				if(a!=NULL && b!= NULL){
					int t = sub(a,b);
					if(t!=NULL){
						printf("Thuong 2 so: %d\n",sub(a,b));
					}
					
				}
				break;
			}
			case 6: out=1;break;
			
		}
		if(out!=1) danhsachluachon();
	}while(out==0);
	
	
}
