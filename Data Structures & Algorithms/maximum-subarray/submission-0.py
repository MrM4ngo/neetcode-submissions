class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        BestSum = nums[0]
        CurrentSum = 0
        for i in nums:
            CurrentSum = max(i,CurrentSum + i)
            BestSum = max(BestSum, CurrentSum)
        return BestSum