class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int, int>> pp;
        for (int i = 0; i < nums2.size(); i++) {
            int next = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    next = nums2[j];
                    break;
                }
            }
            pp.push_back({nums2[i], next});
        }
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int x = nums1[i];
            for (int j = 0; j < pp.size(); j++) {

                if (pp[j].first == x) {
                    ans.push_back(pp[j].second);
                    break;
                }
            }
        }
        return ans;
    }
};