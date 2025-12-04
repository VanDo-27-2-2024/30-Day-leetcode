class Solution {
public:
    bool isPalindrome(string s) {
        // vector<char> tmp;

        // for (char c : s) {
        //     if (isalnum(c)) {                  // <-- Accept digits + letters
        //         tmp.push_back(tolower(c));
        //     }
        // }

        // int n = tmp.size();
        // for (int i = 0; i < n / 2; i++) {
        //     if (tmp[i] != tmp[n - 1 - i]) {
        //         return false;
        //     }
        // }

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while ( (left < right) && (!isalnum(s[left])) ) {
                left++;
            }
            while ( (left < right) && (!isalnum(s[right])) ) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};