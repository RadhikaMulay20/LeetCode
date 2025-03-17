class Solution {
public:
    bool divideArray(vector<int>& nums) {

       int m = nums.size();
        
        sort(nums.begin(), nums.end());

        for (int i = 0; i < m; i += 2) {  // Step by 2 to form pairs
            if (nums[i] != nums[i + 1]) {
                return false; // If a pair is not equal, return false
            }
        }
        
        return true; 
        
    }
};