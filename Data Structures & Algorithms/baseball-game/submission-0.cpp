class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string s : operations) {
            if (s == "+") {
                int x = st.top(); 
                st.pop();
                int y = st.top();

                st.push(x);
                st.push(x + y);
            }
            else if (s == "D") {
                st.push(2 * st.top());
            }
            else if (s == "C") {
                st.pop();
            }
            else {
                st.push(stoi(s));
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};