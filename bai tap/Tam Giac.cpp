#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int b;
	int c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
	if((a > 0) || (b > 0) || (c>0)){
		if((a+b > c) && (b+c > a) && (c+a >b)){
			float P = (float)(a+b+c)/2;
			int C = a+b+c;
			float S = sqrt(P*(P-a)*(P-b)*(P-c));
			printf("Chu vi: %d; \n Dien tich: %f",C,S);
		}else{
			printf("Day khong phai la 3 canh cua tam giac");
		}
	}else{
		printf("Day khong phai la 3 canh cua tam giac");
	}
}
