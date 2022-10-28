#include <stdio.h>
#include "thuvien.h"
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
   if(kt(n)){
		printf("\n%d la so nguyen to",n);
	}else{
		printf("\n%d khong phai la so nguyen to",n);
	}
}

