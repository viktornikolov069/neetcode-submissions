class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return nums[0] == 1 ? 1 : 0;
        }

        int count{0};
        int max{0};
        for (int num : nums) {
            if (num == 1) {
                count++;
            } else {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }

        return count > max ? count : max;
    }
};

// 1. loop through the array
// 2. when you see a 1 increase a counter
// 3. when you see a zero
//  a. check if curr count is bigger than previous
//  b. keep larger count