//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long maxGcd(int N) {
        // code here
         long long ans = N;
        int count = 1;
        for (long long i = N-1; i >= 2; i--) {
            // If two numbers don't have a common multiple, then it gives higher product
            if (__gcd(ans, i) == 1) {
                ans *= i;
                count++;
            }
            if (count == 4) break;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends
