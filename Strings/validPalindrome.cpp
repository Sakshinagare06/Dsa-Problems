class Solution {
private:
    char toLower(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        } else {
            int temp = ch - 'A' + 'a';
            //if A=65 temp=65-65+97=97=a
            //if B=66 temp=66-65+97=98=b and so on
            return temp;
        }
    }

    bool ignore(char ch) {
        if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z')) {
            return false;
        } else {
            return true;
        }
    }    
public:    
    bool isPalindrome(string s) {
            int start = 0;
            int end = s.length() - 1;
            while (start < end) {
                if (ignore(s[start])) {
                    start++;
                    continue;
                }
                if (ignore(s[end])) {
                    end--;
                    continue;
                }
                if (toLower(s[start]) != toLower(s[end])) {
                    return false;
                }
                start++;
                end--;
            }
            return true;
    }
};
