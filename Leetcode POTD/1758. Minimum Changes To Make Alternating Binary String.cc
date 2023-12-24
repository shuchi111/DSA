/*
Iterate through each character in the input string s.
For each character, compare it with the expected character based on its index. If they are different, increment operationsCount.
The expected character at index i is determined by i % 2, meaning '0' for even indices and '1' for odd indices.
After counting the operations needed, return the minimum of operationsCount and its complement (n - operationsCount).
This accounts for both cases: making the string '0101...' or '1010...'.

*/

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int operationsCount = 0;

        for (int i = 0; i < n; i++) {
            // Check if the current character is different from the expected one based on the index
            if (s[i] - '0' != i % 2) {
                operationsCount++;
            }
        }

        // Return the minimum of operationsCount and (n - operationsCount)
        return min(operationsCount, n - operationsCount);
    }
};
