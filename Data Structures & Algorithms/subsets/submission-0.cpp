class Solution {
public:
     vector<int>current;
     vector<vector<int>>ans;

     void fn(vector<int> &nums , int i){

        if(i==nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        fn(nums , i+1);

        current.pop_back();
        fn(nums , i+1);

        
     }
        
    vector<vector<int>> subsets(vector<int>& nums) {
        fn(nums ,0);
        return ans;
    }
};
