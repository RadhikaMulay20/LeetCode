class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int squared = n * n;
        
        long long sum = 1LL * squared * (squared + 1) / 2;
        long long sum_squares = 1LL * squared * (squared + 1) * (2 * squared + 1) / 6;
        
        long long actual_sum = 0, actual_sum_squares = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actual_sum += grid[i][j];
                actual_sum_squares += (long long)grid[i][j] * grid[i][j];
            }
        }

        // a - b
        long long diff = actual_sum - sum;

        // a² - b²
        long long diff_squares = actual_sum_squares - sum_squares;
        
        // a + b = (a² - b²) / (a - b)
        long long sum_a_b = diff_squares / diff;
        
        // Now we can find a and b
        int a = (sum_a_b + diff) / 2;
        int b = (sum_a_b - diff) / 2;
        
        return {a, b};
        
    }
};