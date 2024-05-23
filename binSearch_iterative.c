#include<stdio.h>
#include<stdlib.h>

int binSearch(int* arr,int l,int r,int x){
	while(l<=r){
		int mid=l+(r-l)/2;//remember this mid calculation style coz memory issues occure for int limit value
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] < x){
			l=mid+1;
		}
		if(arr[mid] > x){
			r=mid-1;
		}
	}
	return -1;
}

int main(void){
	int size,i=0,search,flag;
	int *arr;
	printf("Enter the size of that array: ");
	scanf("%d",&size);
	arr=(int *)malloc(size * sizeof(int));
	printf("Enter the Elements of the array in sorted manner:\n");
	for(i;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the searching Element: ");
	scanf("%d",&search);
	flag=binSearch(arr,0,size-1,search);
	if(flag == -1){
		printf("Element not found!!\n");
	}
	else{
		printf("Element found at index no: %d\n",flag);
	}
	free(arr);
	return 0;
}