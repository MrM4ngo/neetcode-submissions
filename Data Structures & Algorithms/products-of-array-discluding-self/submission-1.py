class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        Length = len(nums)

        ReturnArray = []

        for i in range(Length):
            TempNumber = 1
            for j in range(Length):
                if (j != i):
                    TempNumber = TempNumber * nums[j]
            ReturnArray.append(TempNumber)

        return ReturnArray