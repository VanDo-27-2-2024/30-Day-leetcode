class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> store;
        for (int i = 0; i < nums.size(); i++) {
            if (store.count(target - nums[i])) {
                return {i, store[target - nums[i]]};
            }
            store[nums[i]] = i;
        }
        return {};
    }
};