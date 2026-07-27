class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p = s.size();
        int q = t.size();

        string a , b;

        for(int i = 0 ; i < p ; i++)
        {
            if(s[i] != '#') a+= s[i];
            else if(!a.empty() && s[i] == '#') a.pop_back();
        }
        for(int i = 0 ; i < q ; i++)
        {
            if(t[i] != '#') b+= t[i];
            else if(!b.empty() && t[i] == '#') b.pop_back();
        }
        if(a == b) return true;
        else return false;
    }
};