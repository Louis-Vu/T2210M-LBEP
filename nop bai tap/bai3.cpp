#include <stdio.h>
#include <conio.h>
#include "thuvien.h"
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
    return 0;
}
