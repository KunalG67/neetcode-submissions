class Solution {
public:
    vector<int> current;
    vector<vector<int>> ans;

    void fn(vector<int>&nums , int target , int i , int sum){
        if(sum>target){
            return;
        }
        if(i==nums.size()){
            if(sum==target){
            ans.push_back(current);
            return;
            }
            return;
        }
        
        current.push_back(nums[i]);
        fn(nums , target , i , sum+nums[i]);

        current.pop_back();
        
        fn(nums , target , i+1 , sum);
       
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
         fn(nums, target , 0 , 0);
         return ans;
    }
};
