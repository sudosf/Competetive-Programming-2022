// Java program for implementation of Insertion Sort

public class InsertionSort {

	/*  insertion sort */
	public static void insertionSort( int arr[] ) {

		for (int i = 1; i < arr.length; i++) {
			// get element to insert
			int current = arr[i];
			int swap_index = i - 1;

			while (swap_index >= 0 && arr[swap_index] > current) {
				// shift elements
				arr[swap_index + 1] = arr[swap_index];
				swap_index--;
			}
			// insert element
			arr[swap_index + 1] = current;
		}
	}

	/* A utility function to print array of size n */
	public static void printArray(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n; ++i)
			System.out.print(arr[i] + " ");

		System.out.println();
	}

	// Driver method
	public static void main(String [] args) {
		
		int arr[] = { 12, 11, 13, 5, 6 };
		insertionSort(arr);
		printArray(arr);
	}
} 

/* This code is contributed by Rajat Mishra. */
