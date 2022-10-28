#include <math.h>
//1
vtamgiac(int a, int b, int c){
	int X = a+b+c;
	return X;
}
//2
float Stamgiac(int a, int b, int c){
	int p=(a+b+c)/2;
	int S= sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}
//3
int tinhtong(int n)
{
	int a, Sum = 0;
	for (; n != 0;)
	{
		a = n % 10;
		Sum = Sum + a;
		n = n / 10;
	}
	return Sum;
}
//4
int ucln(int a, int b) {
    while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
    }
    return a;
}
//5
int bcnn(int a, int b){
	int x,y;
	x=a;
	y=b;
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	int c=(x*y)/a;
	return c;
}
//6
void kt(int n){
	  if(n>0){
        float a=sqrt(n);
        	if((a*a)==n)
        		printf("So ban da nhap vao la so chinh phuong");
        	else
        		printf("So ban da nhap vao ko phai la so chinh phuong");
            }
}
//7
long int tong(){
	int n=0;
	int s=0;
	while(s<10000){
		s= s+n;
		n++;
	}
	return n;
}
//8
void kttt(int n){
	int i,k;
  int cs1=n%10;
  n=n/10;
  while(n!=0) 
  {
    int cs2=n%10;
    if(cs1>cs2) i=1;
    if(cs2>cs1) k=1;
    cs1=cs2; n=n/10;
  }
  if(i==1 && k==1) printf("Khong tang khong giam\n"); 
  if(i==1 && k==0) printf("Tang\n"); 
  if(i==0 && k==1) printf("Giam\n"); 
  if(i==0 && k==0) printf("Khong tang khong giam\n");
}
