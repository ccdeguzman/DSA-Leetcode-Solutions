class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());

        int left = 1;
        int right = 1;

        // Go forward
        for (int i = 0; i < nums.size(); i++) {
            answer[i] = left;
            left *= nums[i];
        }

        // Go backward
        for (int i = nums.size() - 1; i >= 0; i--) {
            answer[i] *= right;
            right *= nums[i]; 
        }
        return answer;
    }
    // Christian de Guzman
};