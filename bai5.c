#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i*i <=n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int num1,num2;
	
	printf("nhap so nguyen thu nhat: ");
	scanf("%d",&num1);
	
	printf("nhap so nguyen thu hai: ");
	scanf("%d",&num2);
		
	if(isPrime(num1)){
		printf("%d la so nguyen to\n",num1);
		
	}else{
		printf("%d k phai la so nguyen to\n",num1);
	}
	
	if(isPrime(num2)){
		printf("%d la so nguyen to\n",num2);
		
	}else{
		printf("%d k phai la so nguyen to\n",num2);
		
	}
	
	return 0;
}
