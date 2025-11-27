class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_av = 0;
        double sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        max_av = sum / k;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            max_av = max(max_av, sum/k);
        }

        return max_av;
    }
};