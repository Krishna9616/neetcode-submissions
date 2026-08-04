class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0; i<nums.size()-k+1; i++){
            int x=INT_MIN;
            for(int j = i; j<i+k; j++) x=max(x,nums[j]);
            ans.push_back(x);
        }
        return ans;
    }
};
