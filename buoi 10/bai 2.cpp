#include <stdio.h>
#include <string.h>

int main(){	
	int i;
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for (i=0; i<n;i++){
		printf("Nhap mang: ");
		scanf("%d",&a[i]);
	}
	int c=0;
	int max = 0;
		
	for(i=0;i<n;i++){
		if(a[i]>0){
				c=c+a[i];
				if(c>max){
					max = c;
				}
			}else{
				c=0;
				}
			}
	printf("Tong cua cac so duong lien tiep lon nhat la: %d",c);
}
