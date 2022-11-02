#include <stdio.h>
#include <string.h>

int main(){
	char a[50];
	int d=0;
	int c=0;
	scanf("%s",a);
	int k=strlen(a);
	for(int i=0;i<=k;i++){
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'u' || a[i] == 'i'){
			d++;
		}else{
			c++;
		}
	}
	printf("so luong nguyen am la: %d; so luong cac ky tu con lai la: %d",d,c);
}
