class Solution:
    # @param A : tuple of integers
    # @return an integer
    def majorityElement(self, A):
        # S: O(1)
        # T: O(log(w).N)

        n = len(A)
        ans = 0
        for b in range(32):
            ones = 0
            for num in A: # O(N)
                if (1 << b) & num: 
                    ones += 1
            
            if ones > n // 2:
                ans += (1 << b)

        return ans
