class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        std::sort(nums.begin(), nums.end());
        
        if (n == 1)
            return nums[0];
        if (nums[0] != nums[1])
            ans += nums[0];
        if (nums[n - 2] != nums[n - 1])
            ans += nums[n - 1];       
        
        for (int i = 1; i < n - 1; ++i)
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                ans += nums[i];
        
        return ans;
    }
};
