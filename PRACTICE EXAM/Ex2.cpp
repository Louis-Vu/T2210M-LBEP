#include <stdio.h>

int KT(int a[], int n){
	int j;
	int c=0;
	for(j=0;j<n;j++){
		if(a[j]<c){
			c=j;
		}
	}
	return c;
}

int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("chi so cua so nho nhat la: %d",KT(a,n));
}
