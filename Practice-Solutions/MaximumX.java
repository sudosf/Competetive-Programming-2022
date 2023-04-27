import java.io.*;
import java.util.*;

/*   ______Update Class Name!______			*/
public class MaximumX {

	public static void main(String[] args) {
		
		FastReader input = new FastReader();
	 
		int N = input.nextInt();
		int M = input.nextInt();

		int [][] inputMatrix = new int[N][M];
		for (int i = 0; i < N; i++) {
			// code here
			for (int j = 0; j < M; j++) {
				inputMatrix[i][j] = input.nextInt();
			}
		}

		// int N = 3;
		// int M = 3;
		// int [][] matrix = {
		// 	{2, 1, 3},
		// 	{4, 2, 4},
		// 	{5, 9 , 6}
		// }; // 3x3 matrix

		System.out.println(FindMax(inputMatrix, N, M));
	}

	public static int FindMax(int [][] matrix, int N, int M){
		ArrayList<Integer> max_X = new ArrayList<>();

		for (int i = 0; i < N; i++) {
			int least_row_X = matrix[i][0];

			// System.out.print("row " + i + ": ");
			for (int j = 0; j < M; j++) {
				// traverse row N
				// System.out.print( matrix[i][j] +" ");

				least_row_X = Math.min(least_row_X, matrix[i][j]);
			}
			if (i > 0) {
				if (least_row_X <= Collections.max(max_X))
					continue; // skip 'row' and 'col' if they are below max X
			}
			// System.out.println("Least X(row): " + least_X);

			int col_track = 0; // num of times to traverse each column PER row
			while(col_track < M) {
				int least_col_X = matrix[i][col_track];

				// System.out.print("col " + col_track + ": ");
				for (int k = 0; k < N; k++) {
					// traverse column M
					// System.out.print( matrix[k][col_track] +" ");
					least_col_X = Math.min(least_col_X, matrix[k][col_track]);
				}

				/// System.out.println("Least X(col): " + least_X);
				max_X.add( Math.min(least_row_X, least_col_X) );
				col_track++;
			}

			/// System.out.println("\n-------------------\n");
		}

		return Collections.max(max_X);
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
