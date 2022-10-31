#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int h=0;
	int t=0;
	for(i=0;i<n;i++){
			if(arr[i]%2 != 0){
				t= t+arr[i];
				h++;
			}
		}
	float tbc = t/h;
	printf("kq = %f",tbc);
}
