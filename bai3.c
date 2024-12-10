#include<stdio.h>
unsigned long long factorial(int n){
	if(n < 0){
		printf("giai thua k duoc dinh nghia cho so am\n");
		return 0;
	}
	unsigned long long result = 1;
	for(int i =1; i<=n;i++){
		result *=i;
	}
	return result;
}
int main(){
	int number;
	printf("nhap vao so nguyen: ");
	scanf("%d",&number);
	unsigned long long result = factorial(number);
	if(number >= 0){
		printf("gia thua cua %d la: %llu\n",number,result);
	}
	return 0;
}
