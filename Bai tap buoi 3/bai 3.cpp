#include <stdio.h>

int main(){
	float a,b,c,TB;
	printf("Nhap diem the thu tu (diem ktra, diem thi giua ki, diem thi cuoi ki):");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	TB = (a+b+c)/3;
	if(TB >= 9.0){
		printf("Hang A");
	}else{
		if((TB >= 7) && (TB < 9)){
			printf("Hang B");
		}else{
			if((TB >= 5) && (TB < 7)){
				printf("Hang C");
			}else{
				printf("Hang F");
			}
		}
	}
}
