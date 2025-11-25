class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size() - 1;

        while (s < e) {
            int tmp = numbers[s] + numbers[e];
            if (tmp == target) {
                return {s + 1, e + 1};
            }
            else if (tmp > target) {
                e--;
            }
            else if (tmp < target) {
                s++;
            }
        }
        return {};
    }
};