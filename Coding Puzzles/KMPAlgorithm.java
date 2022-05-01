import java.io.*;
import java.util.*;

public class KMPAlgorithm {

	// JAVA program for implementation of KMP pattern
	// searching algorithm
	public static int KMPSearch(String pat, String txt) {
		int M = pat.length();
		int N = txt.length();

		int count  = 0;

		// create lps[] that will hold the longest
		// prefix suffix values for pattern
		int lps[] = new int[M];
		int j = 0; // index for pat[]

		// Preprocess the pattern (calculate lps[]
		// array)
		computeLPSArray(pat, M, lps);

		int i = 0; // index for txt[]
		while (i < N) {
			if (pat.charAt(j) == txt.charAt(i)) {
				j++;
				i++;
			}

			if (j == M) {
				/*
				System.out.println("Found pattern "
								+ "at index " + (i - j)
								+ ": " + txt.substring((i - j), i));
				*/
				count++;
				j = lps[j - 1];
			}
			// mismatch after j matches
			else if (i < N && pat.charAt(j) != txt.charAt(i)) {
				// Do not match lps[0..lps[j-1]] characters,
				// they will match anyway
				if (j != 0) j = lps[j - 1];
				else i++;
			}
		}

		return count;
	}

	public static void computeLPSArray(String pat, int M, int lps[]) {
		// length of the previous longest prefix suffix
		int len = 0; // previous index
		int i = 1;
		lps[0] = 0; // lps[0] is always 0

		// the loop calculates lps[i] for i = 1 to M-1
		while (i < M) {
			if (pat.charAt(i) == pat.charAt(len)) {
				len++;
				lps[i] = len;
				i++;
			}
			else { // (pat[i] != pat[len])
				// This is tricky. Consider the example.
				// AAACAAAA and i = 7. The idea is similar
				// to search step.
				if (len != 0) {
					len = lps[len - 1];

					// Also, note that we do not increment
					// i here
				}
				else { // if (len == 0)
					lps[i] = len;
					i++;
				}
			}
		}
	}

	// Driver program to test above function
	public static void main(String args[]) {
		FastReader reader = new FastReader();

		String pat = reader.nextLine();
		String txt = reader.nextLine();
		
		System.out.println(KMPSearch(pat, txt));
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
				// if (st.hasMoreTokens()) str = st.nextToken("\n");
				str = br.readLine();
			}
			catch (IOException e) { e.printStackTrace(); }
			
			return str;
		} // read entire line

	} // FastReader class 
}
