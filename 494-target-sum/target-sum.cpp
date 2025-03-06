class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums) sum += num;

        if ((sum + target) % 2 != 0 || sum < abs(target)) return 0;

        int S = (sum + target) / 2; // Finding subset sum S
        vector<int> dp(S + 1, 0);
        dp[0] = 1;

        for (int num : nums) {
            for (int j = S; j >= num; j--) {
                dp[j] += dp[j - num]; // Count ways to form subset sum j
            }
        }

        return dp[S];
    }
};
