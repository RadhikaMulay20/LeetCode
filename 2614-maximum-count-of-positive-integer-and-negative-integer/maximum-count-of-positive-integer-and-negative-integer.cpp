class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        int pos = 0, neg = 0;

        while (start <= end) {
            if (start < n && nums[start] < 0) {
                neg++;
                start++;
            }
            if (end >= 0 && nums[end] > 0) {
                pos++;
                end--;
            }
            if (start < n && end >= 0 && nums[start] == 0 && nums[end] == 0) {
                break;
            }
        }
        return max(pos, neg);
    }
};
