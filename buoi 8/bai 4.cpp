#include<stdio.h>
int main(){
    int n;
    do{
        printf("Nhap so phan tu mang:");
        scanf("%d", &n);
    }while(n<1 || n>100);
    int a[n];
    for(int i=0; i< n; i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap la:\n");
    for(int i=0; i< n; i++){
        printf("%d \t",a[i]);
    }
    int d;
    for(int i= n-1 ; i>=0 ; i--){
        if(a[i]%2!=0){
            d = a[i];
            break;
        }    
    }
     printf("\nSo chan cuoi cung trong mang la: %d\n",d);
}
