class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        Sarray = list(s)
        Length = len(Sarray)

        Seen = list()
        Best = 0

        for i in range(Length):
            Seen.clear()
            for j in range(i, Length):
                if Sarray[j] in Seen:
                    break
                else:
                    Seen.append(Sarray[j])
            if Best < len(Seen):
                Best = len(Seen)

        return Best
