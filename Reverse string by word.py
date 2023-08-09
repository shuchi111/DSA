class Solution:
    # @param A : string
    # @return a strings
    def solve(self, A):
           ## Python split does split with any whitespaces
        ## A.split() will do the split with any whitespaces
        return ' '.join(A.split()[::-1])



