//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        vector<alphanumeric> vec;
        map<string,int> mp;
        for(int i=0;i<N;i++){
            mp[A[i]]++;
        }
        for(auto x:mp){
            alphanumeric alpha;
            alpha.name=x.first;
            alpha.count=x.second;
            vec.push_back(alpha);
        }
        return vec;
    }
};





//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends
