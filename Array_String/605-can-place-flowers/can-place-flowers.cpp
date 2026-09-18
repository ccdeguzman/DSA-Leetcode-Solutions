class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i ++) {
            // Skip postion if there is a flower already
            if (flowerbed[i] == 1) {
                continue;
            }

            // Neighbors 
            int left = 0;
            int right = 0;

            // Checking left neighbors. Only valid once we passed first element
            if (i > 0) {
                left = flowerbed[i - 1];
            }

            // Checking right nerigbors. Only valid until end of vector
            if (i < flowerbed.size() - 1) {
                right = flowerbed[i + 1];
            }

            // Check if the neighboring beds are empty
            if (left == 0 && right == 0) {
                flowerbed[i] = 1;

                n--;        // Decrement n

                // Check if all of new flowers (n) have been planted
                if (n == 0){
                    return true;
                }
            }
        }
        // If there left over flowers, then false is returned
        return n <= 0;
    }
    // Christian de Guzman
};