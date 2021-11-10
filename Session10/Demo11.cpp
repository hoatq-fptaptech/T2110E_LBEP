#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{
	char hoten[50];
	int diemthi;
}SV;
int main(){
	int n;
	
	struct SinhVien sv1;// sv1 la bien co kieu du lieu struct SinhVien
	printf("Nhap thong tin sinh vien\n");
	printf("Ho va ten:");
	scanf("%s",sv1.hoten);
	printf("Diem thi:");
	scanf("%d",&sv1.diemthi);
	printf("Thong tin sau khi nhap:\n");
	printf("%s - %d\n",sv1.hoten,sv1.diemthi);
	SV sv2;
	printf("Nhap thong tin sinh vien thu 2\n");
	printf("Ho va ten:");
	scanf("%s",sv2.hoten);
	printf("Diem thi:");
	scanf("%d",&sv2.diemthi);
	printf("THong tin: %s - %d \n",sv2.hoten,sv2.diemthi);
	// muon 1 mang sinh vien
	SV t2110e[25];
	for(int i=0;i<25;i++){
		printf("Ho va ten: ");
		scanf("%s",t2110e[i].hoten);
		printf("Diem thi:");
		scanf("%d",&t2110e[i].diemthi);
	}
	// 1 sinh vien thu 3
	SV sv3; // sv3 = sv2;
	memcpy(&sv3,&sv2,sizeof(SV)); // copy nguyen 1 dai gia tri cua sv2 vao o nho cua sv3
	// con tro struct
	SV *arr;
	// cap 10 o nho
	arr = (SV *)malloc(10 * sizeof(SV));
	for(int i=0;i<10;i++){
		scanf("%s",arr[i].hoten);
		scanf("%d",&arr[i].diemthi);
	}
	// viet theo kieu con tro
	for(int i=0;i<10;i++){
		scanf("%s",(arr+i)->hoten);
		scanf("%d",&((arr+i)->diemthi));
	}
}
