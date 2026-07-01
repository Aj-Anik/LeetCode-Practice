class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int anss = 0;
        int maxa = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            anss += nums[i];
            maxa = max(maxa, anss);
            if (anss < 0) {
                anss = 0;
            }
        }
        return maxa;
    }
};