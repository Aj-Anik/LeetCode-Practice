class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x = nums.size();
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++) {
            v1[i] = nums[i];
        }
        for (int i = n, j = 0; j < n; j++, i++) {
            v2[j] = nums[i];
        }
        vector<int> v;
        for (int i = 0; i < n; i++) {
            v.push_back(v1[i]);
            v.push_back(v2[i]);
        }
        return v;
    }
};