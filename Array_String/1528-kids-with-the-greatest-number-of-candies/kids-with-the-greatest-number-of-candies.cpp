class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        
        // find the maximum value in the vector
        int maxVal = *max_element(candies.begin(), candies.end()); 
        for (int i = 0; i < candies.size(); i++) {
            if ((extraCandies + candies[i]) >= maxVal) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
    // Christian de Guzman
};