public class Solution {
    public int reverseBits(int n) {
        int reversed = 0;

        for (int i = 0; i < 32; i++) {
            // Extract the least significant bit from n
            int bit = n & 1;

            // Shift the reversed number to the left by 1
            reversed = reversed << 1;

            // Add the bit to the reversed number
            reversed = reversed | bit;

            // Shift n to the right by 1 to process the next bit
            n = n >> 1;
        }

        return reversed;
    }
}
Input
n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
Expected
   964176192 (00111001011110000010100101000000)
