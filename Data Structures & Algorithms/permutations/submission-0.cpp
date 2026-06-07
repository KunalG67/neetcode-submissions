class Solution {
public:

    vector<vector<int>> ans;

    void fn(vector<int> &arr , int i){
        if(i==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int j = i ; j<arr.size();j++){
            swap(arr[i],arr[j]);
            fn(arr , i+1);
            swap(arr[i] , arr[j]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        fn(nums , 0);
        return ans;
    }
};
