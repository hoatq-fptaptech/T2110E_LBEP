#include <stdio.h>
int main(){
	char s[10][50];// mang 10 string // coi la mang 1 chieu 10 chuoi
	
	for(int i=0;i<9;i++){
		printf("Nhap chuoi thu %d:",i);
		scanf("%s",s[i]); 
	}
	strcpy(s[9],s[0]);// s[9] = s[0];
	printf("Cac chuoi vua nhap:\n");
	for(int i=0;i<10;i++){
		printf("%s\n",s[i]);
	}
}
