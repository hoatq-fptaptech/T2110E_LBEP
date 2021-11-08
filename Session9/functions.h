int TinhTong(int a,int b){
	return a+b; // sau return luon la 1 gia tri (gia tri nay co the la: bien, bieu thuc)
}
// gia tri luan ly (boolean) -- la ket qua qua toan tu logic va relation ( so sanh va ket hop) - true / false (dung /sai)
bool KiemTraSoDuong(int a){
//	if(a > 0){
//		return true;
//	}
//	return false;
	//a > 0 -> ket qua se la true hoac false
	return a >0;
}

void InRaMenu(){
	printf("Vui long chon menu:\n");
	printf("1. Chon mon an\n");
	printf("2. Chon do uong\n");
	// return;	// co hoac ko co return 
}

int PhepNhan(int a,int b){
	if(a>0 && b > 0){
		int c = a*b;
		return c; // khi gap return, ham se tra ve ket qua va dung lai
		c = 10; // ko chay vi return truoc do roi
	}
	return 0;		
}

int PhepTinhLoto(double money){
	return 12;
}

// Output: Ham nay tra ve gia tri co kieu du lieu gi?
// Input: Ham nay can nhung tham so gi, kieu du lieu nao de thuc hien?
// process: Logic trong ham la gi?
bool KiemTraSNT(int n){
//	int count = 0;
//	for(int i=1;i<=n;i++){
//		if(n%i==0) count++;
//	}
//	if(count == 2) return true;
//	return false;

	if(n<2) return false;
	if(n <4) return true;
	// neu ma di den day dc thi chac chan n>=4
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}

int TimSoDaoNguoc(int n){
	int m =0;
	for( ; n!=0;n/=10){
		m = m*10 + n%10;
	}
	return m;
}

// tim so lon nhat cua 1 mang so nguyen
int FindMax(int arr[],int n){ // bao rang tham so thu nhat la 1 array, tham so thu 2 la 1 int
	int h = arr[0];
	for(int i=0;i<n;i++){
		if(h<arr[i]){
			h = arr[i];
		}
	}
	return h;
}

// viet ham tim so gan lon nhat cua 1 mang
int FindNearMax(int arr[],int n){
	// tim so lon nhat
	int max = FindMax(arr,n); // dung ham FindMax o tren
	int max2 = max;
	for(int i=0;i<n;i++){
		if(arr[i] < max){
			max2 = arr[i];
			break;
		}
	}
	if(max2==max){
		printf("Mang toan so bang nhau");
		return NULL; // gia tri rong
	}
	for(int i=0;i<n;i++){
		if(max2<arr[i] && arr[i]<max){
			max2 = arr[i];
		}
	}
	return max2;
	
}
