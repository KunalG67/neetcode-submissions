class Solution {
public:
vector<int> current;
vector<vector<int>> ans;
set<vector<int>> st;
vector<int>temp;
  void fn(vector<int>& nums , int i){
    
    if(i==nums.size()){
       ans.push_back(current);
       return;    
    }
    //include the number
    current.push_back(nums[i]);
    fn(nums , i+1);
    current.pop_back();
    //do not include number
    while(i+1<nums.size() && nums[i] == nums[i+1]){
        i++;
    }
    fn(nums , i+1);
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        fn(nums , 0);
        
        return ans;
    }
};
