#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[],int size,int searchingElement){
	int i=0;
	for(i;i<size;i++){
		if(arr[i]==searchingElement){
			return i;
		}
	}
	return -1;
}

int main(void){
	int size,i=0,searchingElement,flag;
	int* arr;
	printf("Enter the size of that array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the array element: \n");
	for(i;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the searching element: ");
	scanf("%d",&searchingElement);
	flag=linearSearch(arr,size,searchingElement);
	if(flag==-1){
		printf("The Element is not present in that array!!\n");
	}
	else{
		printf("The Element found at index no: %d\n",flag);
	}
	free(arr);
	return 0;
}