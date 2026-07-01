class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
  
        int x = nums.size();
        int ck;
        int p = nums[0];

        if (x == 1) {
            return p;
        } else
            ck = x / 2;

        int cnt = 1;

        for (int i = 1; i < x; i++) {
            int a;
            a = nums[i];
            if (cnt == ck) {
                return a;
            }
            if (p <= a) {
                cnt++;

            } else {
                p = nums[i];
            }

            
        }

        return 0;
    }
};