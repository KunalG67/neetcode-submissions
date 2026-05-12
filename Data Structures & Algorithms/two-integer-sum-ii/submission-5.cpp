class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int , int>mpp;
        for(int i=0;i<numbers.size();i++){
            int k = target-numbers[i];
            if(mpp.count(k)){
                return { mpp[k], i+1};
            }
            mpp[numbers[i]]=i+1;
        }
    }
};
