#include<stdio.h>
#include<stdlib.h>
void swap(int* arr,int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void bubbleSort(int* arr,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		printf("Pass-%d\n",i+1);
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr,j,j+1);
			}
			print(arr,n);
		}
	}
}
int main(void){
	int size,i;
	int* arr;
	printf("Enter the size of that array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the elements of thar array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,size);
	printf("After Sorting:\n");
	print(arr,size);
	free(arr);
	return 0;
}