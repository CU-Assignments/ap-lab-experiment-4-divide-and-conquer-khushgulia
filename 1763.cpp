public class Solution {
    public String longestNiceSubstring(String s) {
        if (s.length() < 2) {
            return ""; // A single character or empty string can't form a nice substring.
        }

        String longestNice = "";
        
        // Try all substrings of s.
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 2; j <= s.length(); j++) {
                String substring = s.substring(i, j);
                if (isNiceSubstring(substring)) {
                    if (substring.length() > longestNice.length()) {
                        longestNice = substring;
                    }
                }
            }
        }

        return longestNice;
    }

    // Check if a substring is a nice substring
    private boolean isNiceSubstring(String s) {
        boolean[] seenLower = new boolean[26];
        boolean[] seenUpper = new boolean[26];
        
        // Check each character in the substring.
        for (char c : s.toCharArray()) {
            if (Character.isLowerCase(c)) {
                seenLower[c - 'a'] = true;
            } else {
                seenUpper[c - 'A'] = true;
            }
        }

        // A nice substring is one where each lowercase and uppercase version of a character are present.
        for (int i = 0; i < 26; i++) {
            if (seenLower[i] != seenUpper[i]) {
                return false;
            }
        }
        return true;
    }
}
Input
s =
"YazaAay"
Output
"aAa"
Expected
"aAa"
