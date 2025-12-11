class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1 = 0;
        int p2 = 0;

        while (p2 < t.size() && p1 < s.size()) {
            if (t[p2] == s[p1]) p1++;
            p2++;
        }

        return (p1 == s.size());
    }
};