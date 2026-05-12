class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> mpp;
    for(int x : nums){
        if(mpp.count(x)){
            return true;
        }
        mpp.insert(x);
    }
    return false;
}
};