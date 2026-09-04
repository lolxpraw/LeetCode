class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0;
        int maxLength = 1;
        int n = s.length();        
        for (int i = 0; i < n; i++) {
            if (n - i <= maxLength) break; 
            // Tìm từ cuối chuỗi ngược về i
            for (int j = n - 1; j > i; j--) {
                if (j - i + 1 <= maxLength) break;
                if (s[i] == s[j]) {
                    if (isPalindrome(s, i, j)) {
                        maxLength = j - i + 1;
                        start = i;
                        break; 
                    }
                }
            }
        }
        return s.substr(start, maxLength);
    }
private:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};