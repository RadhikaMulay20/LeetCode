class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long n = weights.size();
        if (k == 1 || n == 1) {
            return 0;
        }

        vector<long long> pairSums;
        for (long long i = 0; i < n - 1; i++) {
            pairSums.push_back((long long)weights[i] + (long long)weights[i + 1]);
        }

        sort(pairSums.begin(), pairSums.end());

        long long maxSum = 0, minSum = 0;
        for (long long i = 0; i < k - 1; i++) {
            minSum += pairSums[i];
            maxSum += pairSums[n - 2 - i];
        }

        return maxSum - minSum;
    }
};
