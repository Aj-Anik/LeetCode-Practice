class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int p = nums.size();
        vector<int> v(p);
        for(int i = 0 ; i < p ; i++)
        {
            v[i] = nums[nums[i]];
        }
        return v;

    }
};