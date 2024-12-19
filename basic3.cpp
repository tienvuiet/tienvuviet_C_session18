#include<stdio.h>
#include<string.h>
struct sinhvien{
	char name[100];
	int age;
	char phone[100];
};
int main (){
    struct sinhvien sv[5];
    printf("nhap thong tin cho 5 sinh vien:\n");
    for(int i=0;i<5;i++){
    	printf("sinh vien %d:\n",i+1);
    	printf("nhap name: ");
    	sv[i].name[strlen(sv[i].name)] = '/0';
    	fgets(sv[i].name,sizeof(sv[i].name),stdin);
    	printf("nhap age: ");
    	scanf("%d",&sv[i].age);
    	fflush(stdin);
    	printf("nhap phone: ");
    	scanf("%s",&sv[i].phone);
    	fflush(stdin); 
	}
	printf("thong tin cua 5 sinh vien la:\n");
	for(int i=0;i<5;i++){
		printf("sinh vien %d:\n",i+1);
		printf("name :%s\n",sv[i].name);
		printf("age :%d\n",sv[i].age);
		printf("phone :%s\n",sv[i].phone);
	}
	return 0;
}
