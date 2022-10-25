#include <stdio.h>
int sdn(int a){
    
    int b = a % 10; 
    a /= 10; 
    int l;
    while(a > 0){
        l = a % 10;
        a /= 10; 
        b = b * 10 + l; 
    }
    return b;
}
 
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("so dao nguoc là %d", sdn(n));
}
