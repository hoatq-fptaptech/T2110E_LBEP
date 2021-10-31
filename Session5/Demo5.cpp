#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("Before i= %d\n",i);
		if(i==4) break;// thoat han vong lap
		//if(i==4) continue;// bo qua phan con lai cua vong co continue
		printf("After i= %d\n",i);
		
	}
}
