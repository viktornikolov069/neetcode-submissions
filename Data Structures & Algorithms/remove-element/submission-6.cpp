class Solution {
   public:
    template <typename T, typename U>
    auto removeElement(T& nums, U val) -> int {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            if (nums[left] == val) {
                nums[left] = nums[right];
                right--;
            }
            if (nums[left] != val) {
                left++;
            }
        }
        return left;
    }
};
