class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right) {
            // Skip if char is not alpha numeric
            while(left < right && !isalnum(s[left])) {
                left++;
            }
            // Skip if char is not alpha numeric
            while(left < right && !isalnum(s[right])) {
                right--;
            }
            // Make each char lowercase because it's case sensitive
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    // Christian de Guzman
};