class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int need = target - curr;

            if (seen.find(need) != seen.end()) {
                return {seen[need], i};
            }
            seen[curr] = i;
        }

        return {};
    }
    // Christian de Guzman
};