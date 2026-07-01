class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> v(x);
        for (int i = 0 ; i < x ; i++)
        {
            if(nums[i] % 2 == 0)
            {
                v[i] = 0;
            }
            else {
                v[i] = 1;
            }
        }
        sort(v.begin() , v.end());
        return v;
    }
};