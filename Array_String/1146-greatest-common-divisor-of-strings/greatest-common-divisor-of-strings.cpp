class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int str1Length = str1.length();
        int str2Length = str2.length();

        // if there are not equal, there cannot be a common repeating pattern
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        else {
            // get the gcd of str1 and str2
            int len = gcd(str1Length, str2Length);
            // return the substring (either str1 or str2 can be used here)
            return str1.substr(0, len);
        }
    }
    // Christian de Guzman
};