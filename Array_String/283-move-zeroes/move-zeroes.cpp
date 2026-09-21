class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;      // a pointer for write 

        // Scan through the array with read
        for (int read = 0; read < nums.size(); read++) {
            // if the current read is not equal to 0 then we swap the
            // item write is pointing to with the item read is pointing 
            if (nums[read] != 0) {
                swap(nums[write], nums[read]);
                write++;
            }
        }
        // Christian de Guzman
    }
};