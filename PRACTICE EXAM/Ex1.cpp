#include <stdio.h>

int main(){
	int a[10];
	printf("Enter 10 integers\n ");
	for(int i=0;i<10;i++){
		printf("Nhap a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Display in the reversed order:\n");
	for(int i=10-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
