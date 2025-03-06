class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if (n == 0)
            return 0;
        int longest = 1;
        int count = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) { 
            if (nums[i] + 1 == nums[i + 1]) {
                count++;
            } else if (nums[i] != nums[i + 1]) {
                count = 1;
            }
            longest = max(longest, count);
        }

        return longest;
    }
};