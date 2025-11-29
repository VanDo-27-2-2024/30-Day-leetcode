class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> tmp;

        for (char c : magazine) {
            tmp[c]++;
        }

        for (char c : ransomNote) {
            if (tmp[c] == 0) {
                return false;
            }

            tmp[c]--;
        }

        return true;
    }
};