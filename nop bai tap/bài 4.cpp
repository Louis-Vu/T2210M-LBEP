#include<stdio.h>

int sum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    return sum;
}
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
