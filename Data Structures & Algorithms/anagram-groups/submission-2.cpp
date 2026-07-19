class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto &s : strs) {
            vector<int> count(26, 0);
            for (char c : s) count[c - 'a']++;
            string t = "";
            for (int i = 0; i < 26; i++) {
                t += "#" + to_string(count[i]);
            }
            mp[t].push_back(s);
        }

        vector<vector<string>> res;
        for (auto &p : mp) res.push_back(p.second);
        return res;
    }
};
