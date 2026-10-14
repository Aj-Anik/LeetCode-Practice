class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        int total = 0;
        for (auto c : nums) {
            total += c;
        }
        int n = nums.size();
        vec.push_back(total);
        for (int i = n - 2; i >= 0; i--) {
            vec.push_back(total - nums[i+1]);
            total -= nums[i+1];
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};