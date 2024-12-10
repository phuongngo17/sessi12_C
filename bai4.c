#include<stdio.h>
int findMax(int arr[], int size){
	if(size<= 0){
		printf("mang k hop le\n");
		return 0;
	}
	int max = arr[0];
	for(int i =1; i < size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int n;
	printf("nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	
	if(n <= 0){
		printf("kich thuoc mang k hop le\n");
		return 1;
	}
	
	int arr[n];
	printf("nhap cac phan tu cua mang: \n");
	for(int i = 0; i < n; i++){
		printf("phan tu[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	int max = findMax(arr, n);
	printf("phan tu lon nhat trong mang la: %d\n",max);
	
	return 0;
}
