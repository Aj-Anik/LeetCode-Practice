class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp = "";
        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (temp == "" || temp == ".") {
                } else if (temp == "..") {
                    if (!st.empty())
                        st.pop();
                } else {
                    st.push(temp);
                }
                temp = "";
            } else {
                temp += path[i];
            }
        }
        if (st.empty())
            return "/";
        vector<string> v;
        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        string ans = "";
        for (string s : v) {
            ans += "/";
            ans += s;
        }
        return ans;
    }
};