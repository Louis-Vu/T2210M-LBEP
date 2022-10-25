#include<stdio.h>
float Tinhtong(int n){
	int i;
	float s=0;
	for(i=1;i<=n;i++){
	s=s+(float)1/i;
	}
	return s;
}
int main(void){
	int n;
	float kq;
	printf("Nhap n");
	scanf("%d",&n);
	kq=Tinhtong(n);
	printf("%f",kq);
}
