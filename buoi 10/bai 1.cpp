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
	int d=0;
	int max = 0;
		
	for(i=0;i<n;i++){
		if(a[i]>0){
				d++;
				if(d>max){
					max = d;
				}
			}else{
				d=0;
				}
				
			}
	printf("so luong so duong lien tiep nhieu nhat la: %d",max);
}
