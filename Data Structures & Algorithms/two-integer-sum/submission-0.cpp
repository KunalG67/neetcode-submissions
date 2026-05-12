class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int p = target - nums[i];
            if(mpp.count(p)){
                return{ mpp[p] , i};
            }
            else mpp[nums[i]]=i;
        }
        return {};
    }
    
};
