class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        // code here
        int cnt = 0;
        for(int i=0; i<V; i++) {
            for(auto j : adj[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
