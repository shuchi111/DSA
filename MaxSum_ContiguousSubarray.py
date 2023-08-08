class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maxSubArray(self, A):

        s=0

        res=min(A)

        for i in range(len(A)):

            s+=A[i]

            if s<0:

                s=0

            else:

                res=max(res,s)

        return max(max(A),res)
