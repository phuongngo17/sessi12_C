#include<stdio.h>
void printfArr(int arr[], int size){
 printf("nhap vao mang: ");
 for(int i =0; i < size; i++){
 	printf("%d ",arr[i]);
 }	
}
int main(){
	int arr[] = {3, 4, 5, 7};
	int size= sizeof(arr)/sizeof(arr[0]);
	printfArr(arr,size);
	return 0;
}
