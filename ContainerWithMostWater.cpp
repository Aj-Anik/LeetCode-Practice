class Solution {
public:
    int maxArea(vector<int>& height) {
        int p = 0;
        int q = height.size() -1;
        int mx = 0;
        int result;
        while(p < q){
            int m = q - p;
            int result = (min(height[p] , height[q])) * m;
            mx = max(result , mx);
            if(height[p] < height[q]) p++;
            else q--;

        }
        return mx;
    }
};