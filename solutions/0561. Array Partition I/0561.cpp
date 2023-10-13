class Solution {
 public:
  int arrayPairSum(vector<int>& nums) {
    int ans = 0;

    std::ranges::sort(nums);

    for (int i = 0; i < nums.size(); i += 2)
      ans += nums[i];

    return ans;
  }
};
