#include<stdio.h>
#include<stdlib.h>
typedef struct pair{
	int Max;
	int Min;
}pair;
pair MaxMin(int arr[],int size){
	pair result;
	int i;
	result.Max=arr[0];
	result.Min=arr[0];
	for(i=1;i<size;i++){
		if(result.Max < arr[i]){
			result.Max=arr[i];
		}
		if(result.Min > arr[i]){
			result.Min=arr[i];
		}
	}
	return result;
}
int main(void){
	int* arr;
	int i,size;
	pair result;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	result=MaxMin(arr,size);
	printf("The Max element is : %d\n",result.Max);
	printf("The Min element is : %d\n",result.Min);
	free(arr);
	return 0;
}