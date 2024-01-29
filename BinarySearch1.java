//Raghab Ganguly
//Binary Search using java method:1
import java.util.Scanner;

public class BinarySearch1 {
	
	int binarySearch(int[] arr,int left,int right,int findElement) {
		int mid;
		while(left <= right) {
			mid=(left+right)/2;
			if(arr[mid] == findElement)
				return mid;
			else if(arr[mid] < findElement)
				left=mid+1;
			else
				right=mid-1;
		}
		return -1;
	}
	
	public static void main(String[] args) {
		BinarySearch1 b=new BinarySearch1();//Default constructor provided by java compiler
		Scanner sc=new Scanner(System.in);
		int size,findElement,index;
		
		System.out.print("Enter the size of the integer array: ");
		size=sc.nextInt();
		
		int[] arr=new int[size];
		
		System.out.print("\nEnter the elements of the array by sorting manner: ");
		for(int i=0;i<size;i++)
			arr[i]=sc.nextInt();
		
		System.out.print("\nEnter the Searching element: ");
		findElement=sc.nextInt();
		
		index=b.binarySearch(arr,0,size-1,findElement);
		if(index != -1)
			System.out.println("\nSearching element found at "+(index+1)+"th position");
		else
			System.out.println("Element did not found!!");
	}
}

/*output:
D:\Algorithms\Week1>java BinarySearch1
Enter the size of the integer array: 5

Enter the elements of the array by sorting manner: -55 0 100 258 500

Enter the Searching element: 258

Searching element found at 4th position

D:\Algorithms\Week1>java BinarySearch1
Enter the size of the integer array: 5

Enter the elements of the array by sorting manner: 10 25 44 111 250

Enter the Searching element: 5
Element did not found!!
*/
		