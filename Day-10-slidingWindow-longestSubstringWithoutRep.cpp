class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> tmp;
        int result = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++){
            if (tmp.find(s[right]) != tmp.end()) {

                if (tmp[s[right]] >= left) {
                    left = tmp[s[right]] + 1;
                    cout << left << endl;
                }
            }

            tmp[s[right]] = right;

            result = max(result, right - left + 1);
        }

        return result;
    }
};