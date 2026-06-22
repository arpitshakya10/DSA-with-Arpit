class Solution {
public:
    int arraySign(vector<int>& nums) {
        double p=1, n=nums.size();
        for(int i=0;i<n;i++){
           p=p*nums[i];
           p/=2; 
        }
         if(p>0){
            return 1;
        }
        if(p==0){
            return 0;
        }
       
        return -1;
    }
};