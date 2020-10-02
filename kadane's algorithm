/**
     | |  | |                        | |    
 _ __| | _| |__  _ __ ___   __ _  ___| |__  
| '__| |/ / '_ \| '__/ _ \ / _` |/ __| '_ \ 
| |  |   <| |_) | | | (_) | (_| | (__| | | |
|_|  |_|\_\_.__/|_|  \___/ \__,_|\___|_| |_|

**/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int t = fr.nextInt();
        while (t-- > 0) {
            int n = fr.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = fr.nextInt();
            }
            int max_sum = find_max_sum(a, n);
            System.out.println(max_sum);
        }
    }


    static int find_max_sum(int[] a, int n) {
        int global_max = a[0];
        int local_max = a[0];

        for (int i = 1; i < n; i++) {
            local_max = Math.max(a[i], local_max + a[i]);
            global_max = Math.max(local_max, global_max);
        }
        return global_max;
    }
}
