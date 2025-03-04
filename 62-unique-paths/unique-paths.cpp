class Solution {
public:
    int uniquePaths(int m, int n) {

        int N = m + n - 2;
        int r = m - 1;
        long long ans = 1;  // Change to long long to prevent overflow
        for (int i = 1; i <= r; i++) {
            ans = ans * (N - r + i) / i;  // Ensure multiplication happens before division
        }
        return (int)ans;  
        
    }
};