class Solution {
public:
vector<int> current;
vector<vector<int>> ans;
set<vector<int>> st;
vector<int>temp;
  void fn(vector<int>& nums , int i){
    
    if(i==nums.size()){
        
        temp = current;
        sort(temp.begin(),temp.end());
        if(!(st.count(temp))){
        ans.push_back(current);
        }
        st.insert(temp);
        return;
        
    }
      
    current.push_back(nums[i]);
    fn(nums , i+1);
    current.pop_back();
    fn(nums , i+1);
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        fn(nums , 0);
        
        return ans;
    }
};
