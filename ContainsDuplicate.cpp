class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int ans = 0;
        set<int> c;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            c.insert(nums[i]);
        }
        int x = c.size();
        int y = nums.size();
        if(x == y) return false;
        
        return true;
        
    }
};