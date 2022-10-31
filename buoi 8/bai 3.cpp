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
	bool d=false;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			d=true;
			printf("x thuoc mang");
			break;
		}
	}
	if(d==false) printf("x ko thuoc mang");
}
