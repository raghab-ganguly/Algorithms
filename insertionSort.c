#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void insertionSort(int arr[],int size){
	int i,j,key;
	for(i=1;i<size;i++){
		key=arr[i];
		j=i-1;
		while(arr[j]>key && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
		print(arr,size);
	}
}
int main(void){
	int* arr;
	int i,size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	insertionSort(arr,size);
	printf("After Sorting:\n");
	print(arr,size);
	free(arr);
	return 0;
}