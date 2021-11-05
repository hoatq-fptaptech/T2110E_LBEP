#include <stdio.h>
int main(){
	int menu,out = 0,grandTotal = 0;
	do{	
		printf("1. Chon mon an\n");
		printf("2. Cho do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat\n");
		printf("Vui long chon menu:");
		scanf("%d",&menu);
		switch(menu){
			case 1: {
				int food,back=0;
				do{
					printf("1. Com ga 35k\n");
					printf("2. Pho 40k\n");
					printf("3. Bun 30k\n");
					printf("4. Quay lai chon menu\n");
					printf("Vui long chon mon an:\n");
					scanf("%d",&food);
					switch(food){
						case 1:{
							grandTotal += 35;
							printf("Ban da chon Com ga 35k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 2:{
							grandTotal += 40;
							printf("Ban da chon Pho 40k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 3:{
							grandTotal += 30;
							printf("Ban da chon Bun 30k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 4: back = 1;break;
						default: printf("Vui long cho dung mon an\n");
					}
				}while(back==0);
				break;
			}
			case 2:{
				int food,back=0;
				do{
					printf("1. Cafe 25k\n");
					printf("2. Sinh to 30k\n");
					printf("3. Tra da 3k\n");
					printf("4. Quay lai chon menu\n");
					printf("Vui long chon mon an:\n");
					scanf("%d",&food);
					switch(food){
						case 1:{
							grandTotal += 25;
							printf("Ban da chon Cafe 25k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 2:{
							grandTotal += 30;
							printf("Ban da chon Sinh to 30k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 3:{
							grandTotal += 3;
							printf("Ban da chon Tra da 3k, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 4: back = 1;break;
						default: printf("Vui long cho dung mon an\n");
					}
				}while(back==0);
				break;
			}
			case 3:{
				if(grandTotal > 0){
					printf("Tong tien phai thanh toan: %d\n",grandTotal);
					printf("Cam on quy khach!\n");
					out = 1;
				}
				break;
			}
			case 4: {
				if(grandTotal >0){
					printf("Tong tien phai thanh toan: %d\n vui long thanh toan truoc khi ve!\n",grandTotal);
				}else{
					
					out = 1;
				}
				break;
			}
			default: printf("Vui long chon dung chuc nang\n");
		}
	}while(out == 0);
}
