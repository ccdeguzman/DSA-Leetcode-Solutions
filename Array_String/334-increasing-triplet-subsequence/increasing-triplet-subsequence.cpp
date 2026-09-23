class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // Have 2 minimums where they are set to the highest possible value
        int first_min = INT_MAX;
        int second_min = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= first_min) {
                first_min = nums[i];
            }
            else if (nums[i] <= second_min) {
                second_min = nums[i];
            }
            else {
                return true;
            }
        }
        return false;
    }
    // Christian de Guzman
};