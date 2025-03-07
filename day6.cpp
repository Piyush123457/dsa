import java.util.ArrayList;

class Solution {
    public static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) { 
            if (n % i == 0) return false;
        }
        return true;
    }

    public int[] closestPrimes(int left, int right) {
        int[] ans = {-1, -1};
        ArrayList<Integer> y = new ArrayList<>(); 

        for (int x = left; x <= right; x++) { 
            if (isPrime(x)) {
                y.add(x);
            }
        }

        if (y.size() < 2) {
            return ans;
        }

        int sub2 = Integer.MAX_VALUE; 
        for (int i = 0; i < y.size() - 1; i++) {
            int sub1 = y.get(i + 1) - y.get(i); 
            if (sub1 < sub2) { 
                ans[0] = y.get(i);
                ans[1] = y.get(i + 1);
                sub2 = sub1; 
            }
        }
        return ans; 
    }
}
