class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first=0,sec=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            first=nums[i];
            sec=target-first;
            if(mpp.find(sec)!=mpp.end()){
                return {i,mpp[sec]};
            }
            mpp[first]=i;
        }
        return{};
    }
};