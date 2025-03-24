class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        int n=nums.size();

        for( int i=0;i<n-1;i++){
            if(nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i + 1]=0;
            }
        }
        // Step 2: Shift non-zero elements to the left while maintaining relative order
        int index = 0;  // Pointer to place non-zero elements
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

        // Fill the remaining positions with 0s
        while (index < n) {
            nums[index++] = 0;
        }
        return nums;
        
    }
};