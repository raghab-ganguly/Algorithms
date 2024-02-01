#include<stdio.h>
#include<stdlib.h>

int binSearch(int *arr,int l,int r,int x){
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid] > x){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main(void){
	int size,*arr,x,flag;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	arr=(int *) malloc(size * sizeof(int));
	printf("Enter the elements of that array: \n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Your array is: ");
	printArray(arr,size);
	printf("Enter the searching element: ");
	scanf("%d",&x);
	
	flag=binSearch(arr,0,size-1,x);
	if(flag != -1){
		printf("Your element found at index no. %d\n",(flag+1));
	}
	else{
		printf("Your element does no found!!\n");
	}
	
	free(arr);
	
	return 0;
}
