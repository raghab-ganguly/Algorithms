#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	//create temp arrays
	int L[n1],R[n2];
	//copy data to temp arrays
	//l[] and R[]
	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[m+1+j];
	}
	i=0;//initial index of first subarray
	j=0;//initial index of Second subarray
	k=l;//initial index of merged subarray
	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			arr[k]=L[i];
			i++;
		}else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
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
	mergeSort(arr,0,size-1);
	printf("After Sorting:\n");
	print(arr,size);
	free(arr);
	return 0;
}