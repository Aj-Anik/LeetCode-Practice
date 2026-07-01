class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long a = 0;
        long long b = x;
        while (b > 0) {
            a = a * 10 + b % 10;
            b /= 10;
        }

        if (a - x == 0)
            return true;
        else
            return false;
    }
};