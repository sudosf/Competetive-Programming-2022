import java.util.*;

public class Balloons {
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);

        // System.out.print("\nSince this is new, Please enter No. of test cases( 10, ;) ): ");
        int T = in.nextInt();

        // initialize cost of balloons with colors green and purple.
        // System.out.print("Enter cost of balloons (x2): ");
        // int green = in.nextInt();
        // int purple = in.nextInt();
       
        // Do [T] number of times
        for (int testCase = 0; testCase < T; testCase++){
            int green = in.nextInt();
            int purple = in.nextInt();

            // initialize number of participants
            // System.out.print("Enter No. of participants: ");
            int students = in.nextInt();            

            // initialize arrays for holding participants data
            int [] q1 = new int[students];
            int [] q2 = new int[students]; 

            // obtain data for each participant
            // System.out.println();
            for (int i = 0; i < students; i++){
                // System.out.print("Case #"+ i +" enter participants result for the problem (0 or 1): ");
                q1[i] = in.nextInt();
                q2[i] = in.nextInt();
            }

            // System.out.println("\nMyLists -->\nq1: "+ Arrays.toString(q1) +"\nq2: " + Arrays.toString(q2) +"\n<--\n");
            int q1Count = 0, q2Count = 0;

            // iterate over the arrays (q1 & q2) and compare their elements
            for (int sf = 0; sf < students; sf++){
                if (q1[sf] == 1) q1Count++;
                if (q2[sf] == 1) q2Count++;
            }

            // Calculate the sum and determine the minimum cost
            int q1Sum = q1Count * green + q2Count * purple;
            int q2Sum = q1Count * purple + q2Count * green;

            if (q1Sum <= q2Sum){ 
                System.out.println(q1Sum);

            }else{
                System.out.println(q2Sum);
            }
        }
        in.close();

        // System.out.println("T: "+ T);
    }
}