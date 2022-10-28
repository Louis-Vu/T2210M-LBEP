int sdn(int a){
    
    int b = a % 10; 
    a /= 10; 
    int l;
    while(a > 0){
        l = a % 10;
        a /= 10; 
        b = b * 10 + l; 
    }
    return b;
}
bool kt(int x){
	if(x<2){
		return false;
	}
	if(x<4){
		return true;
	}
	int i=2;
	while(i<=x-1){
		if(x%i==0){
			return false;
		}
		i++;
	}
	return true;
}
void max(int num1, int num2, int num3){
  int max = num1;
  
    if(num2 > max){
        max = num2;
    }
  
    if(num3 > max){
        max = num3;
    }
  printf("So lon nhat là: %d",max);
}
 int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
float Tinhtong(int n){
	int i;
	float s=0;
	for(i=1;i<=n;i++){
	s=s+(float)1/i;
	}
	return s;
}
int sum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    return sum;
}
