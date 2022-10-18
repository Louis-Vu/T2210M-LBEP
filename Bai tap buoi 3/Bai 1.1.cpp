#include <stdio.h>
#include <conio.h>

int main(){
	long int a;
	float b;
	printf("Nhap gia tri tong doanh so ban hang:");
	scanf("%d",&a);
	if(a <= 100){
		b = a*5/100;
		printf("hoa hong nhan duoc la %f",b);
	}else{
		if(100 < a <= 300){
			b = a*10/100;
			printf("hoa hong nhan duoc la %f",b);
		}else{
			b = a*20/100;
			printf(" hoa hong nhan duoc la %f",b);
		}
	}
}
