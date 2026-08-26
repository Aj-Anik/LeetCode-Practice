class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        vector<int> mx;
        mx.push_back(0);
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < mn)
                mn = prices[i];
            else {
                mx.push_back(prices[i] - mn);
            }
        }
        int p = *max_element(mx.begin(), mx.end());
        return p;
    }
};