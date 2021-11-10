#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap s1: ");
	scanf("%s",s1); // hello
	printf("Nhap s2: ");
	scanf("%s",s2); // t2110e
//	strcat(s1,s2); // s1 = s1+s2;
	printf("s1: %s\n",s1); // hellot2110e
	printf("s2: %s\n",s2); // t2110e
	
//	strcat(s2,s1); // s2 = s2+s1;
	printf("s1: %s\n",s1);// hello
	printf("s2: %s\n",s2);// t2110ehellot2110e
	
	// strcmp -> string compare
	if(strcmp(s1,s2) < 0){
		printf("%s dung truoc %s trong day alphabe\n",s1,s2);
	}else{
		printf("%s dung truoc %s trong day alphabe\n",s2,s1);
	}
	printf("VI tri cua ky tu e trong %s: %u",s1,strchr(s1,'e') - s1);
	
	strcpy(s1,s2); // s1 = s2;
	printf("s1: %s\n",s1);// hello
	printf("s2: %s\n",s2);// t2110ehellot2110e
	int len = strlen(s1);
	printf("do dai s1: %d\n",len);
}
