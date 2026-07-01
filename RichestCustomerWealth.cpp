class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int arr[100] = {0};
        int ans = 0;
        for (int i = 0; i < accounts.size(); i++) 
        {
            ans = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                ans += accounts[i][j];
            }
            arr[i] = ans;
        }
        int mx = *max_element(arr, arr + 100);
        return mx;
    }
};