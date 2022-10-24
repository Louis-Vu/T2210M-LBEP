#include <stdio.h>

int main(){
	int n;
	do{
	printf("Nhap n:");
	scanf("%d",&n);
	}while(n<=0 && printf("Moi nhap lai n:"));

	int i,s=0;
	for(i=1; i <= n; i++){
		if(n%i == 0){
			printf("%d \n",i);
			s+=i;
		}
	}
	printf("s = %d",s);
}
