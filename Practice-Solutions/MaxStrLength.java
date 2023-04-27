import java.io.*;
import java.util.*;

/*   ______Update Class Name!______			*/
public class MaxStrLength {

	public static void main(String[] args) {
		
		FastReader input = new FastReader();
	 
		int T = input.nextInt();
		int M = 3; // number of letters
		for (int i = 0; i < T; i++) {
			// code here
			Integer [] letters = new Integer[M];

			// get all letters
			for (int j = 0; j < M; j++){
				letters[j] = input.nextInt();
			}

			System.out.println(findMaxLength(letters));
		}
	}

	// @params: letters[]: unsorted array of available letters
	public static int findMaxLength(Integer [] letters){

		Arrays.sort(letters, Collections.reverseOrder());

		for (Integer n : letters){
			System.out.print("ARR: "+ n +", ");
		}
		System.out.println();

		int maxLetter = letters[0];
		int secondMaxLetter = letters[1];

		if (maxLetter == 0)
			return 0;
		else if (secondMaxLetter == 0) 
			return 1;

		int total =  maxLetter + secondMaxLetter;
		int preLength = maxLetter - secondMaxLetter;

		int maxLength = total - preLength;
		if ( (maxLetter != secondMaxLetter)) 
			return maxLength + 1;
		return maxLength;
	}

	static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader() {
			br = new BufferedReader(
				new InputStreamReader(System.in));
		} // constructor

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				}
				catch (IOException e) { e.printStackTrace(); }
			}

			return st.nextToken();
		} // read single character or string

		int nextInt() { 
			return Integer.parseInt(next()); 
		} 

		long nextLong() { 
			return Long.parseLong(next()); 
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				if (st.hasMoreTokens()) str = st.nextToken("\n");
				else str = br.readLine();
			}
			catch (IOException e) { e.printStackTrace(); }
			
			return str;
		} // read entire line

	} // FastReader class 
}
