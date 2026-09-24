class Solution {
public:
    bool isSubsequence(string s, string t) {
        // starting point of s and t strings
        int currS = 0;
        int currT = 0;

        while (currS < s.length() && currT  < t.length()) {
            if (s[currS] == t[currT]) {
                currS++;
            } 
            currT++;
        }
        return currS == s.length();
    }
    // Christian de Guzman
};