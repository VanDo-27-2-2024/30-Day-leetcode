class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> tmp;

        for(int c : nums) {
            if (tmp.count(nums[i])) return true;
            tmp.insert(nums[i]);
        }

        return false;
    }
};