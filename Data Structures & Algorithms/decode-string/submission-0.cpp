class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for (char c : s) {
            if (c != ']') {
                st.push(c);
            } else {
                string temp = "";
                while (st.top() != '[') {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                int x = stoi(num);

                string ans = "";
                while (x--) {
                    ans += temp;
                }
                for (char ch : ans) {
                    st.push(ch);
                }
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};