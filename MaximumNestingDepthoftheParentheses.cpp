class Solution {
public:
    int maxDepth(string s) {
        stack<string> ss;
        vector<int> vc;
        int x = s.size();
        for (int i = 0; i < x; i++) {
            if (s[i] == '(') {
                ss.push("(");
            } else if (s[i] == ')') {
                vc.push_back(ss.size());
                ss.pop();
            }
        }
        if (vc.empty())
            return 0;
        int mx = *max_element(vc.begin(), vc.end());
        return mx;
    }
};