class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int result = 0;

        // Loop through the vector chars
        while (i < chars.size()) {
            int groupLength = 1;    // the count of repeated char
            
            // i + groupLength < char.size() checks if we still within the bounds of char
            // chars[i + groupLength] == chars[i] checks whether the next char is the same as current char
            while(i + groupLength < chars.size() && chars[i + groupLength] == chars[i]) {
                groupLength++;      // if the conditions are met then increment group length
            }

            // Write the character itself into the output at res, then increment res
            chars[result] = chars[i];
            result++;

            // If the group length is more than 1, convert the integer groupLength to string 
            if (groupLength > 1) {
                for (char c : to_string(groupLength)) {
                    chars[result] = c;
                    result++;
                }
            }
            i += groupLength;       // Move i forward by the whole group length to start the next group.
        }
        return result;
    }
    // Christian de Guzman
};