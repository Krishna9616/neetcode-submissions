class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, zeroCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zeroCount++;
            else prod*=nums[i];
        }

        vector<int>res(nums.size(), 0);
        if(zeroCount>1)  return res;
        for(int i=0; i<nums.size(); i++){
           if(zeroCount==1) {
                if(nums[i]==0) res[i]=prod;
                else res[i]=0;
            }
            else res[i]=prod/nums[i];
        }
        return res;
    }
};
