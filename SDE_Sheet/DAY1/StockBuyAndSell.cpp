// problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_till_now=10000;
        int best_profit=0;
        for(int i=0;i<prices.size();i++){
            if(min_till_now>prices[i])
                min_till_now=prices[i];
            else if(best_profit<prices[i]-min_till_now)
                best_profit=prices[i]-min_till_now;
        }
        return best_profit;
    }
};