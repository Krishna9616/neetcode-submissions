class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int mostwater=0;
        while(l<=r){
            int water=(r-l)*min(heights[r],heights[l]);
            mostwater=max(water, mostwater);
            if(heights[l]<heights[r]) l++;
            else r--;
        }
        return mostwater;
    }
};
