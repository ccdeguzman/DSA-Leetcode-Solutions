class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            // Skip position if there is a flower
            if(flowerbed[i] == 1) {
                continue;
            }

            // Consider the outside of the flowerbed to be empty
            int left = 0;
            int right = 0;

            // Checking the left neighbor. It is valid to check once we past the first element
            if (i > 0) {
                left = flowerbed[i - 1];
            }

            // Check the right neighbor. It is valid until we reached the end of the vector
            if (i < flowerbed.size() - 1) {
                right = flowerbed[i + 1];
            }

            // Plant if both left and right neighbors are not occupied
            if (left == 0 && right == 0) {
                flowerbed[i] = 1;
                n--;

                // Check if we used all the new flowers
                if (n == 0) {
                    return true;
                }
            }
        }
        // Check if there are leftover new flowers
        return n <= 0;
    }
};