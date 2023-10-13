class Solution:
  def maxSum(self, nums: List[int], k: int) -> int:
    kMod = 1_000_000_007
    kMaxBit = 30
    ans = 0
    # minIndices[i] := min index optimalNums that i-th bit should be moved to
    minIndices = [0] * kMaxBit
    optimalNums = [0] * len(nums)

    for num in nums:
      for i in range(kMaxBit):
        if num >> i & 1:
          optimalNums[minIndices[i]] |= 1 << i
          minIndices[i] += 1

    for i in range(k):
      ans += optimalNums[i]**2
      ans %= kMod

    return ans
