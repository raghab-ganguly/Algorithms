//Raghab Ganguly
//Binary Search with Recursive calling to binSeearch function...
#include<stdio.h>
#include<stdlib.h>

int binSearch_recursive(int *arr,int l,int r,int find){
	if(r >= l){
		int mid=l+(r-l)/2;
		if(arr[mid] == find)
			return mid;
		else if(arr[mid] > find)
			return binSearch_recursive(arr,l,mid-1,find);
		else
			return binSearch_recursive(arr,mid+1,r,find);
	}
	return -1;
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main(void){
	int i,size,*arr,x,flag;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	arr=(int *) malloc(size * sizeof(int));
	printf("Enter the elements of that array: \n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Your array is: ");
	printArray(arr,size);
	printf("Enter the searching element: ");
	scanf("%d",&x);
	
	flag= binSearch_recursive(arr,0,size-1,x);
	if(flag != -1){
		printf("Your element found at index no. %d\n",flag);
	}
	else{
		printf("Your element does no found!!\n");
	}
	
	free(arr);
	
	return 0;
}

/*output:
Enter the size of the array: 5
Enter the elements of that array:
10 20 20 55 100
Your array is: 10       20      20      55      100
Enter the searching element: 20
Your element found at index no. 2
*/

//I gave 20 two times intentionally and it returns the nearest search element from mid..[index=2]
//This type of issues can be handled with other way.. acording to the problem definition.
