#include<stdio.h>
#include<stdlib.h>
void modifiedBubbleSort(int arr[],int n){
	int i,j,temp,swapped;

	for(i=0;i<n-1;i++){
		swapped = 0;

		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1] = temp;
				swapped =1;
			}
		}
		if(swapped ==0){
			break;
		}
	}
}
int main(void){
	int *ptr;
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	ptr=(int *) malloc(sizeof(int) * n);
	printf("Enter the array elements: \n");
	for (int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	modifiedBubbleSort(ptr,n);
	printf("The sorted array: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",ptr[i]);
	}
	return 0;
}
