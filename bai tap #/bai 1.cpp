#include <stdio.h>
#include<string.h>

void chuyen(char arr[]){
		int d=strlen(arr);
		for(int i=0;i<=d;i++){
		if(arr[i]>=97 && arr[i]<=122){
			arr[i]=arr[i]-32;
		}
	}
}

int main(){
	char arr[50];
	printf("nhap chuoi: ");
	scanf("%s",arr);
	chuyen(arr);
	printf("chuoi sau khi chuyen la: %s",arr);

}
