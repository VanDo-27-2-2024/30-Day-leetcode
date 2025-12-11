class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> freq;

        for (char c : s) freq[s[i]]++;

        for (char c : t) {
            if (freq[t[i]] == 0) {
                return false;
            }

            freq[t[i]]--;
        }

        return true;
    }
};