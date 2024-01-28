#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			//Swap if the element found is greater than the element
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(void){
	int n;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements: \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	bubbleSort(arr,n);

	printf("The Sorted array is: \n");
	for(int i=0;i<n;i++){
                printf("%d  ",arr[i]);
        }
	return 0;
}
