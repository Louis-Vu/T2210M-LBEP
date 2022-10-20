#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 2; i<n;){
		if(n%i==0) {
			printf("khong la so nguyen to"); 
			return 0;
		}else{
		i++;	
		} 
	}
	printf("la so nguyen to");
}
