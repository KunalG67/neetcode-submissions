class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       long long p=1;
       unordered_map<int, int>freq;
       for(auto x:nums){
        freq[x]++;
       }
       if(freq[0]==0){
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=0){
           p = p*nums[i];
       }
       }
       vector<int>k;

       for(int i=0;i<nums.size();i++){
        k.push_back(p/nums[i]);
       }
    
       return k;
       }
       else if(freq[0]==1){
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=0){
           p = p*nums[i];
       }
        }
       vector<int>n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
              n.push_back(0);
            }
            else n.push_back(p);
        }
        return n;
       }
    
    else {
        vector<int>j;
       for(int i=0;i<nums.size();i++){
        j.push_back(0);
       }
       return j;
    }
    }
};
