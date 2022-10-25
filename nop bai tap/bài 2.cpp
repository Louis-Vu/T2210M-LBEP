#include <stdio.h>
 
void max(int num1, int num2, int num3){
  int max = num1;
  
    if(num2 > max){
        max = num2;
    }
  
    if(num3 > max){
        max = num3;
    }
  printf("So lon nhat là: %d",max);
}
 
int main(void) {
  int num1,num2,num3;
   printf("\nNhap vao so thu nhat:");
   scanf("%d",&num1);
    printf("\nNhap vao so thu hai:");
   scanf("%d",&num2);
    printf("\nNhap vao so thu ba:");
   scanf("%d",&num3);
  max(num1, num2, num3);
  }
   
