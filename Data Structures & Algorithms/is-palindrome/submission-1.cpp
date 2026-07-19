class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        for (char c : s) {
            if (isalnum(c)) k += tolower(c);
        }

        int l = 0, r = k.size() - 1;
        while (l < r) {
            if (k[l++] != k[r--]) return false;
        }
        return true;
    }
};
