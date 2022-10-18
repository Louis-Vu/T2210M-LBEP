#include <stdio.h>

int main(){
	float luong, sothue, luongrong;
	int thuesuat;
	printf("Nhap luong: ");
	scanf("%f",&luong);
	if(luong >= 15){
		sothue = luong*30/100;
		thuesuat = 30;
	}else{
		if((luong >= 7) && (luong < 15)){
			sothue = luong*20/100;
			thuesuat = 20;
		}else{
			sothue = luong*10/100;
			thuesuat = 10;
		}	
	}
	luongrong = luong - sothue;
	printf("luong: %f \n",luong);
	printf("Thue thu nhap voi muc thue suat %d %% = %f \n",thuesuat,sothue);
	printf("So tien luong ban nhan duoc la %f ",luongrong);
}
