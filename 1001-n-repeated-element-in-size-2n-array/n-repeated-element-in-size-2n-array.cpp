class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(), nums.end());
        int prev=nums[0];

        for(int i=1;i<n;i++){
            int next=nums[i];
            if(next==prev){
                return prev;
            }else{
                prev=next;
            }


        }
        return prev;
        
    }
};