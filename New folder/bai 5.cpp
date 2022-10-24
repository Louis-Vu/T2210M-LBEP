#include<stdio.h>

int main()
{
    int n,i,s=0;
    do{
    printf("Nhap n:");
    scanf("%d",&n);    
	}while(n<=0 && printf("Moi nhap n(n phai lon hon 0):"));
           
    if (n<6) 
    	printf("%d khong phai la so hoan hao",n);
    else
    {
      for (i=1; i<n-1;i++){
      	if (n%i==0) {
      		s=s+i;
		  }
	  }
      if (s==n){
      	printf("%d la so hoan hao",n);
	  }else {
	  	printf("%d khong phai la so hoan hao",n);
	  }
	}	
}
