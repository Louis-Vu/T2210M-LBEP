#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	char b[50];
	printf("nhap chuoi a:");
	scanf("%s",a);
	printf("nhap chuoi b:");
	scanf("%s",b);
	int f=0;
    for(int i=0;i<= b[100];i++){
    	if(strchr(a,b[i])){
    		f=1;
        }else{
        	f=0;
        	break;
		}
	}
	if(f==1){
		printf("chuoi b co xuat hien trong chuoi a");
	}
	else{
	printf("chuoi b khong xuat hien trong chuoi a");
	}
}
