#include<stdio.h>
#include<stdlib.h>
int size;
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int partition(int arr[],int low,int high){
	int pivot=low;
	int i=low;
	int j=high;
	while(i<j){
		while(arr[i]<=arr[pivot] && i<=high-1){
			i++;
		}
		while(arr[j]>=arr[pivot] && j>=low+1){
			j--;
		}
		if(i<j){
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[pivot],&arr[j]);
	return j;
}
void quickSort(int arr[],int low,int high){
	print(arr,size);
	if(low<high){
		int partitionIndex=partition(arr,low,high);
		quickSort(arr,low,partitionIndex-1);
		quickSort(arr,partitionIndex+1,high);
	}
}

int main(void){
	int* arr;
	int i;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,size-1);
	printf("After Sorting:\n");
	print(arr,size);
	free(arr);
	return 0;
}