#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int arr[],int size){
	int i,j,Min;
	for(i=0;i<size;i++){
		Min=i;
		for(j=i+1;j<size;j++){
			if(arr[Min] > arr[j]){
				Min=j;
			}
		}
		print(arr,size);
		swap(&arr[Min],&arr[i]);	
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
	selectionSort(arr,size);
	printf("After Sorting:\n");
	print(arr,size);
	free(arr);
	return 0;
}