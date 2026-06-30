class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        int x = s.size();
        int y = t.size();
        if(x != y) return false;
        bool check = true;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] != t[i])
            {
                check = false;
            }
        }
        if(check) return true;
        else return false;

    }
};