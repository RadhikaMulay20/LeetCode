class Solution {
public:
    long long coloredCells(int n) {

        // long long min=n-3;
        // long long ans=13;
        // if (n==1){
        //     return 1;
        // }
        // else if(n==2) {
        //     return 5;
        // }
        // else if(n==3){
        //     return 13;
        // }else{
        //     while(min<=n){

        //     }
   
        // }
        
        return (long long)2*n*(n-1)+1;
        
    }
};