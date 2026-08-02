class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        int i = 0, j = 0;
        string s = "";

        while (i < n && j < m) {
            s += word1[i];
            s += word2[j];
            i++;
            j++;
        }

        s += word1.substr(i);
        s += word2.substr(j);

        return s;
    }
};