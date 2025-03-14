class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long n = (long long)candies.size();
        long long total_candies = accumulate(candies.begin(), candies.end(), 0LL);
        
        if(total_candies < k)
            return 0;
        
        long long low = 0, high = total_candies / k;
        long long mid;
        long long alloted_kids = 0;


        while(low <= high) {
            
            alloted_kids = 0;
            mid = low + (high - low) / 2;
            if(mid == 0) {
                low = mid + 1;
                continue;
            }

            for(int i = 0; i < n; i++) {
                alloted_kids += ((long long)candies[i] / mid);
            }
            if(alloted_kids < k)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return high;
    }
};