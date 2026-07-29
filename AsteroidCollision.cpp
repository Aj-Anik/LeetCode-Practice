class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {

            int cur = asteroids[i];

            while (!st.empty() && st.top() > 0 && cur < 0) {

                if (abs(st.top()) < abs(cur)) {
                    st.pop();
                }
                else if (abs(st.top()) == abs(cur)) {
                    st.pop();
                    cur = 0;
                    break;
                }
                else {
                    cur = 0;
                    break;
                }
            }

            if (cur != 0)
                st.push(cur);
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};