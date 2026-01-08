class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int tmp = 0;
        int minn = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            tmp += nums[right];

            while (tmp >= target) { 
                if (minn == 0) {
                    minn = right - left  + 1;
                }
                minn = min((right - left + 1), minn);
                tmp -= nums[left];
                left++;
            }
        }
        return minn;
    }
};