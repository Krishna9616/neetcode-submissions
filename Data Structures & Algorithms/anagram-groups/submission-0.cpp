class Solution {
public:
    bool anagram(string s, string t){
        if(s.size()!=t.size()) return false;
        vector<int> count(26,0);
        for(char c : s) count[c-'a']++;
        for(char c : t) count[c-'a']--;
        for(int n : count) if(n!=0) return false;
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<bool> grouped(strs.size(), false);

        for(int i = 0; i < strs.size(); i++){
            if(grouped[i]) continue;
            vector<string> s;
            s.push_back(strs[i]);
            grouped[i] = true;

            for(int j = i+1; j < strs.size(); j++){
                if(!grouped[j] && anagram(strs[i], strs[j])){
                    s.push_back(strs[j]);
                    grouped[j] = true;
                }
            }
            res.push_back(s);
        }

        return res;
    }
};
