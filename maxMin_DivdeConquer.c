//Raghab Ganguly
//Finding the max and min value of a given array using Divide and Conquer approach. 
#include<stdio.h>
#include<stdlib.h>
int max,min;

void maxmin(int *a,int i,int j){
	int max1,min1,mid;
	if(i==j){
		max = min = a[i];
	}
	else{
		if(i==j-1){
			if(a[i] < a[j]){
				max=a[j];
				min=a[i];
			}
			else{
				max=a[i];
				min=a[j];
			}
		}
		else{
			mid=(i+j)/2;
			maxmin(a,i,mid);
			max1=max;min1=min;
			maxmin(a,mid+1,j);
			if(max < max1)
				max=max1;
			if(min>min1)
				min=min1;
		}
	}
}

int main(void){
	int i,size,*a;
	printf("\n Enter the total number of Elements: ");
	scanf("%d",&size);
	a=(int *) malloc(size * sizeof(int));
	printf("Enter the numbers: \n");
	for(i=1;i<=size;i++)
		scanf("%d",&a[i]);

	max=a[0];
	min=a[0];
	maxmin(a,1,size);
	printf("Minimum element in that array: %d\n",min);
	printf("Maximum element in that array: %d\n",max);
	
	free(a);
	return 0;
}

/*output:
 Enter the total number of Elements: 5
Enter the numbers:
-8 255 1 -500 1000
Minimum element in that array: -500
Maximum element in that array: 1000

--------------------------------
Process exited after 34.68 seconds with return value 0
Press any key to continue . . .
*/
