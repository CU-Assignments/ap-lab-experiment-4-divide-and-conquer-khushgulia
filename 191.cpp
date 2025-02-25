public class Solution {
    public int hammingWeight(int n) {
        int count = 0;
        
        while (n != 0) {
            n = n & (n - 1); // Remove the rightmost 1-bit
            count++;          // Increment the count of 1-bits
        }
        
        return count;
    }
}
Input
n =
11
Output
3
Expected
3
