import sys

class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        ConditionLength = len(prices)
        Length = ConditionLength - 1


        #Condition Check
        if (ConditionLength == 1):
            return 0
        elif (ConditionLength == 2):
            if (prices[1] - prices[0] > 0):
                return prices[1] - prices[0]
            else:
                return 0
    
        Smallest = prices[0]
        Largest = prices[1]

        HighestProfit = 0
                
        #main
        for i in range(Length):
            for j in range(i+1, Length+1):
                if ((prices[j]-prices[i]) > HighestProfit):
                    HighestProfit = prices[j] - prices[i]

        

        return HighestProfit

