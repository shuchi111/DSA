// Buy Maximum Stocks if i stocks can be bought on i-th day


/*

Input:
price = [10,7,19]
k = 45
Output: 
4
Explanation: 
A customer purchases 1 stock on day 1, 2 stocks on day 2 and 1 stock on day 3 for 10, 7 * 2 = 14 and 19 respectively. Hence, total amount is 10 + 14 + 19 = 43 and number of stocks purchased is 4.




Algorithm:

1. Input: n (number of products), k (amount of money), price (array containing product prices).
2. Create a vector of pairs v to store prices along with their indices.
3. Sort the vector v based on the prices in ascending order.
4. Initialize ans to 0.
5. Iterate through the sorted vector v.
Calculate the maximum number of units that can be bought based on the budget and product price.
Update ans by adding the maximum units.
Update the budget k by subtracting the cost of the bought units.
6. Return the final value of ans.

*/

// Solution
//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>>v;
        
        for( int i =0; i<n; ++i)
        v.push_back( { price[i], i+1});
        
        sort( v.begin(), v.end());
        int ans = 0;
        for (auto it:v ) {
            int maxBuy = min( k/it.first, it.second);
            ans += maxBuy;
            k -= it.first * maxBuy;
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
