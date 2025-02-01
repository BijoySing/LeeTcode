class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1)
            return true;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] % 2 == nums[i + 1] % 2)
            return false;
        }
        return true;
    }
};