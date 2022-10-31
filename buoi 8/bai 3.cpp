#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("nhap arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	int d=0;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			d++;
		}
	}
		if(d==1) printf("x thuoc mang ");
		else printf("x khong thuoc mang");
}
