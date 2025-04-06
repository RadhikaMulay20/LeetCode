class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int> sub;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (sub.empty() || sub[sub.size() - 1] < nums[i]) {
                sub.push_back(nums[i]);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), nums[i]);
                *it = nums[i];
            }
        }
        return sub.size();
    }
};
