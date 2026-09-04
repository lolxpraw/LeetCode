class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int compare = x;
        long long new1 = 0;

        while (x > 0) {
            int n = x % 10;
            new1 = new1 * 10 + n;
            x = x / 10;
        }

        return new1 == compare;
    }
};