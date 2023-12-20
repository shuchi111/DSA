/*
Approach -

  Algorithm findWinner(n, A)
Input: n - number of elements in the array A
       A - an array of integers representing the game state

Output: the player (1 or 2) who has a winning strategy

1. Initialize a variable ans to A[0].
2. Iterate through the array A starting from index 1 up to n-1.
    a. Update ans using the XOR operation: ans ^= A[i].
3. If ans is 0, return 1 (Player 1 wins), as they have a winning strategy.
4. If n is even, return 1 (Player 1 wins) since they can always mirror the moves of the opponent.
5. Otherwise, return 2 (Player 2 wins) since Player 1 does not have a winning strategy in this case.

Example Usage:
   result = findWinner(5, [3, 1, 4, 7, 9])
   // The result will be 1, indicating that Player 1 has a winning strategy.
*/

class Solution {
public:
    int findWinner(int n, int A[]) {
        int ans = A[0];
        
        for (int i = 1; i < n; i++) {
            ans ^= A[i];  
        }
        
        if (ans == 0) {
            // If the XOR of all elements is 0, Player 1 wins
            return 1;
        } else if (n % 2 == 0) {
            // If the number of elements is even, Player 1 wins
            return 1;
        } else {
            // If the XOR of all elements is non-zero and the number of elements is odd, Player 2 wins
            return 2;
        }
    }
};
