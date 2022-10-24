#include <stdio.h>

int main(){
	int n, dau;
	printf("Nhap n:");
	scanf("%d",&n);
	dau = 0;
	
	while(n!=0){
		dau = n%10;
		n/=10;
	}
	printf("%d",dau);
}
