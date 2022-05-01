import java.io.*;
import java.util.*;

public class SubString {

	public static int simpleSubStrCount(String str, String pattern) {
		int N = str.length();
		int M = pattern.length();
		int totalPatternCount = 0;

		// loop through each char in pattern[] one by one 
		for (int i = 0; i <= N - M; i++) {
			/* For current index i, check for
			pattern match */
			int j;           
			for (j = 0; j < M; j++) {
				if (str.charAt(i + j) != pattern.charAt(j)) {
					break;
				}
			}

			// if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			if (j == M) {               
				totalPatternCount++;               
				j = 0;               
			}           
	   } 

		return totalPatternCount;
	}

	public static void main(String[] args) {
		/*
		FastReader input = new FastReader();
		
		int T = input.nextInt();
		for (int i = 0; i < T; i++) {
			// code here
		}
		*/

		String s = "aaaaa";
		String pat = "aa";
		System.out.println(simpleSubStrCount(s, pat));
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
				catch (IOException e) {
					e.printStackTrace();
				}
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
				if(st.hasMoreTokens()){
					str = st.nextToken("\n");
				}
				else{
					str = br.readLine();
				}
			}
			catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		} // read entire line

	} // FastReader class 
}
