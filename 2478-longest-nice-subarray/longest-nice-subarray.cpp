class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int start = 0, end = 0, mask = 0, answer = 1, n = nums.size();

        for(; end < n; end++) {
            while((mask & nums[end]) != 0) {
                mask = mask ^ nums[start++];
            }
            mask |= nums[end];
            answer = max(answer, end - start + 1);
        }

        return answer;
    }
};