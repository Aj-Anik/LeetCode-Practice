class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isalpha(s[i]) || isalnum(s[i]))
            {
                ss+= s[i];
            }
        }
        s = ss;
       
        reverse(ss.begin() , ss.end());
        
        if(ss == s)
        {
            return true;
        }
        else return false;
    }
};