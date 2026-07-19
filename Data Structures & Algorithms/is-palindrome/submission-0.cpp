class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        for (char c : s) {
            if (!isalnum(c)) continue; 
            k += tolower(c); 
        }

        int l = 0, r = k.size() - 1;
        string t = k;
        while (l <= r) swap(t[l++], t[r--]);
        return k == t;
    }
};
