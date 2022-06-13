//https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy = prices[0];
    int profit = 0;
    for(int i=1;i<prices.size();i++){
        if(buy > prices[i]){              //to check for lower buy value in prices
            buy = prices[i];
        }
        else if(prices[i] - buy > profit){  // profit or not
            profit = prices[i] - buy;
        }
    }
    return profit;
}
