class Solution {
public:
    string toLowerCase(string s) {
        int x = s.size();
        for(int i = 0 ; i < x ; i++)
        {
            if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
            }
        }
        return s;
    }
};