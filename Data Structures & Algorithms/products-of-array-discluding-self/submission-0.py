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

        # for x in range(1,Length):
        #     TempNumer = 1
        #     print(TempNumber)
        #     TempNumber = TempNumber * nums[i]
        #     print(TempNumber)
        # ReturnArray[0] = TempNumber

        return ReturnArray