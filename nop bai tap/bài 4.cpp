#include<stdio.h>
#include"thuvien.h"

int main() {
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while (n <= 0);
    	int s = sum(n);
    printf("Tong cua day so la: %d ",s);
    return 0;
}
