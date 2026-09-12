class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;    // pointer to the last element in nums1
        int j = n-1;    // pointer to the last element in nums2
        int k = m+n-1;  // pointer to where largest element should 
                        // go (end of nums1 vector)

        // We will be going backwards since both vectors are sorted.
        // k will track the where largest element will go-starting from
        // the end of the vector
        while(i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // since we are working with nums1 primarily, there will be cases
        // where there will be left over for nums2 so we add its sorted 
        // elements to the end of the vector of nums1
        while(j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    // Christian de Guzman
};