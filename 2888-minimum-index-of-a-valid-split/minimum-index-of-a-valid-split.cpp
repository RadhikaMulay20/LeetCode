class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        const int n=nums.size();
        int cnt=0, xM=0, maxF=0;
        //Las Vegas
        srand(time(NULL));
        while(1){
            xM=nums[rand()%n];
            maxF=count(nums.begin(), nums.end(), xM);
            if (maxF*2>n) break;
        }
    //    cout<<xM<<" maxF="<<maxF<<endl;
        int cntxM=0;
        for(int i=0; i<n; i++){
            cntxM+=nums[i]==xM;
            if (cntxM*2>(i+1) && ((maxF-cntxM)*2>(n-i-1)))
                return i;
        }
        return -1;
    }
};