class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        counts = {}
        left = 0
        result = 0

        for right in range(len(s)):
            char_right = s[right]
            counts[char_right] = counts.get(char_right, 0) + 1

            while (right - left + 1) - max(counts.values()) > k:
                char_left = s[left]
                counts[char_left] -= 1
                
                if counts[char_left] == 0:
                    del counts[char_left]
                    
                left += 1

            result = max(result, right - left + 1)

        return result