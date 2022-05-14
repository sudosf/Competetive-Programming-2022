import java.io.*;
import java.util.*;


public class PerfectNumber {

	public static String isPerfect(int N) {

		int sum = 1;

		// find all devisors
		// loop upto the square root of N 
		for (int i = 2; i*i <= N; i++) {
			if (N % i == 0) {
				if (i*i != N) sum += i + N/i;
				else sum += i;
			}
		}

		if (sum == N && N != 1) return "YES";
		
		return "NO";
	}

	public static void main(String[] args) {
	
		FastReader input = new FastReader();
	 
		int T = input.nextInt();
		for (int i = 0; i < T; i++) {
			int N = input.nextInt();
			System.out.println(isPerfect(N));
		}
		
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
