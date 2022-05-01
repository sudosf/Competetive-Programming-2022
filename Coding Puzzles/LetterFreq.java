import java.io.*;
import java.util.*;
 
public class LetterFreq {
 
	public static long countFreq(String s, char key) {
		long charFreq = s.chars().filter(ch -> ch == key).count();
		return charFreq;
	}
 
	public static void main(String[] args) {
		FastReader input = new FastReader();
 
		long N = input.nextLong();
		String s = input.nextLine();
 
		long max = 0;
 
		for (char i = 'a'; i <= 'z'; i++) {
		    
			max = Math.max(max, countFreq(s, i));
		}
 
		System.out.println(N - max);
	 
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