#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		char name[100];
		int age;
		char phone[100];
	};
	sinhvien s;
	printf("nhap ten sinh vien: ");
	fgets(s.name,sizeof(s.name),stdin);
	fflush(stdin);
	printf("nhap tuoi: ");
	scanf("%d",&s.age);
	fflush(stdin);
	printf("nhap so dien thoai: ");
	fgets(s.phone,sizeof(s.phone),stdin);
	fflush(stdin) ;
	printf("\n");
	printf("ten sinh vien: %s\n", s.name);
	printf("tuoi: %d\n", s.age);
	printf("so dien thoai: %s\n", s.phone);
	return 0;
	
}
