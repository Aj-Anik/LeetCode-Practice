class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = nums.size();
        int cnt = 0 ;
        for(int i = 0 ; i < x ; i++)
        {
            for(int j = i+1 ; j < x ; j++)
            {
                if(nums[i] == nums[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};