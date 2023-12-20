/*
1. Function buyChoco(prices, money):
2.   Initialize variables:
       - ans = INT_MAX
       - fin
3.   Iterate through all pairs of chocolate prices using nested loops:
       - Calculate the sum of prices for each pair and update ans to be the minimum of the current ans and the calculated sum.
4.   Calculate fin as money - ans.
5.   Check and return the result:
       - If fin is greater than or equal to 0, return fin.
       - If fin is negative, return the original money.

*/

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans = INT_MAX;;
        int fin;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = 0; j < prices.size(); j++) {
                if (i != j ) {
                    int sum = prices[i] + prices[j];
                    ans = min(ans, sum);
                }
            }
        }
       
        fin = money - ans;
        if(fin>=0){
        return fin;
        }
        else{
            return money;
        }
    }
};
