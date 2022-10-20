#include<stdio.h>

int main()
{
    int n,i,s=0;
    printf("Nhap n:");
    scanf("%d",&n);            
    if (n<6) 
    	printf("khong phai la so hoan hao");
    else
    {
      for (i=1; i<n-1;i++)
      if (n%i==0) s=s+i;
      if (s==n) printf("la so hoan hao");
      else printf(" khong phai la so hoan hao");
    }
}
