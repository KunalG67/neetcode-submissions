class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        for(auto x:nums){
            freq[x]++;
        }
        multimap<int , int ,greater<int>>mp;
        for(auto x:freq){
            mp.insert({x.second, x.first});
        }

        int count=0;
        vector<int> arr;
        for(auto x:mp){
            if(count==k){
                break;
            }
            else {
                count++;
                arr.push_back(x.second);
        }
        }
         return arr;

        return {};
    }
};
