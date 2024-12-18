#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		char name[100];
		int age;
		char phone[100];
	};
	sinhvien s;
	strcpy(s.name,"Vu Viet Tien");
    s.age=18;
    strcpy(s.phone,"0915402696");
	printf("ten sinh vien: %s\n", s.name);
	printf("tuoi: %d\n", s.age);
	printf("so dien thoai: %s\n", s.phone);
	return 0;
	
}
