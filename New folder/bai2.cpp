#include <stdio.h>

int main(){
	int n;
	int d = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	int i;
	for(i=6; i < n;){
		if(d<i){
			d=i;
			i+=6;
		}else{
			i+=6;
		}
	}
	printf("so lon nhat nho hon n chia het cho ca 2 va 3 la: %d",d);
	return 0;
}
