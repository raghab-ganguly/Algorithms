//Raghab Ganguly
//Linear Search: 1
import java.util.Scanner;
public class LinearSearch1 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int size,find,flag=0;
		System.out.println("Enter the size of the array: ");
		size=sc.nextInt();
		int[] arr=new int[size];
		
		System.out.println("Enter the elements of the array: ");
		for(int i=0;i<size;i++)
			arr[i]=sc.nextInt();
		
		System.out.println("Enter the finding element: ");
		find=sc.nextInt();
		
		for(int i=0;i<size;i++){
			if(arr[i]==find){
				System.out.println("The element found at "+(i+1)+"th position..");
				flag=1;
			}
		}
		if(flag==0)
			System.out.println("Element not found!!!");
		
	}
}

/*output:
D:\Algorithms>java LinearSearch1
Enter the size of the array:
5
Enter the elements of the array:
100 -8 1 10 25
Enter the finding element:
1
The element found at 3th position..
*/