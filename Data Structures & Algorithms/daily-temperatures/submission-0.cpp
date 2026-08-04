class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans;
        for(int i =0; i<n; i++){
            int j = i + 1, count = 1;
            bool found = false;
            while(j < n){
                if (temperatures[i] < temperatures[j]) {
                    found = true;
                    break;
                }
                count++;
                j++;
            }
            if (found) ans.push_back(count);
            else ans.push_back(0);
        }
        return ans;
    }
};