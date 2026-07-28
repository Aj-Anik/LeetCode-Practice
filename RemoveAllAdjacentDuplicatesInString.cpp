class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        string ss;
 
        if(n > 0) ss+= s[0];
        for(int i = 1 ; i < n ; i++){
            if(ss.size() != 0 && ss.back() != s[i])
            {
                ss+=s[i];
            }
            else if (ss.size() != 0){
                ss.pop_back();
            }
            else if(ss.size() == 0) ss+=s[i];
        }
        return ss;
    }
};