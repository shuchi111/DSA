
class Solution{
public:
//Calculate the maximum sum without adjacent
int findMaxSum(int *arr, int n) {
    // code here
    if(n==1){
        return arr[0];
    }
    int a =arr[0];
    int b=max(a,arr[1]);
    for(int i =2;i<n;i++){
        int c = max(b,a+arr[i]);
        a=b;
        b=c;
    }
    return b;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
