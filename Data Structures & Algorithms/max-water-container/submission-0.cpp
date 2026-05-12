class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int w=0;
        while(l<r){
            int k =min(heights[l],heights[r])*abs(l-r);
            w = max(w,k);
            if(heights[l]<heights[r]){
                l++;
                continue;
            }
            if(heights[l]>heights[r]){
                r--;
                continue;
            }
            r--;
            l++;
        }
        return w;
    }
};
