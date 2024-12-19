#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[100];
	int age;
	char phone[100];
};
int main (){
    struct sinhvien sv[50];
    int n=3; 
    printf("nhap thong tin cho 5 sinh vien:\n");
    for(int i=0;i<n;i++){
    	printf("sinh vien %d:\n",i+1);
    	sv[i].id=i+1;
    	printf("nhap name: ");
    	fgets(sv[i].name,sizeof(sv[i].name),stdin);
    	printf("nhap age: ");
    	scanf("%d",&sv[i].age);
    	fflush(stdin);
    	printf("nhap phone: ");
    	scanf("%s",&sv[i].phone);
    	fflush(stdin); 
	}
	int timid;
	printf("nhap vao id muon tim kiem: ");
	scanf("%d",&timid);
	fflush(stdin);
	int tim=-1;
	for(int i=0;i<n;i++){
		if(sv[i].id==timid){
			tim=i;
			printf("sua thuoc tinh name: ");
			fgets(sv[i].name,sizeof(sv[i].name),stdin);
			printf("sua thuoc tinh age: ");
			scanf("%d",&sv[i].age);
			fflush(stdin);
			break;
		}
	}
	if(tim==-1){
	printf("id khong ton tai trong mang!!");	
	}
	printf("thong tin cua 5 sinh vien sau khi sua la:\n");
	for(int i=0;i<n;i++){
		printf("sinh vien %d:\n",i+1);
		printf("id: %d\n",sv[i].id);
		printf("name :%s\n",sv[i].name);
		printf("age :%d\n",sv[i].age);
		printf("phone :%s\n",sv[i].phone);
	}
	return 0;
}
