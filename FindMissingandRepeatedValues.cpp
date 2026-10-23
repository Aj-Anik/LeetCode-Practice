class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int v = grid.size();
        int a , b;
        vector<int> vec(v * v + 1, 0);
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                vec[grid[i][j]]++;
            }
        }
        for (int i = 1; i <= v * v; i++) {
            if (vec[i] == 0)
                a = i;
            if(vec[i] == 2)
                b = i;
        }
        return {b , a};
    }
};