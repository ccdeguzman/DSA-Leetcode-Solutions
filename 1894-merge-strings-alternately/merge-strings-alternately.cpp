class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0;          // for word1
        int j = 0;          // for word2

        while(i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
                i++;
            }
            if (j < word2.length()) {
                result += word2[j];
                j++;
            }
        }
        return result;
    }
    // Christian de Guzman
};