#include<stdio.h>
void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){
	if(n==0){
		return;
	}
	towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
	printf("Move disk %d form Rod %c to Rod %c\n",n,from_rod,to_rod);
	towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main(void){
	int n;
	printf("Enter the no. of disks: ");
	scanf("%d",&n);
	towerOfHanoi(n,'A','C','B');
	return 0;
}