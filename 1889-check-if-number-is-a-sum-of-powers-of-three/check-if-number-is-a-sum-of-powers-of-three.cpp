class Solution {
public:
    bool checkPowersOfThree(int n) {

        int num=n;
        while(num>0){

            if(num%3==2){
                return false;
            }
            num=num/3;
        }
        return true;
        
    }
};