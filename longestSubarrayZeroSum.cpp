#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int> mp;
    int maxm = 0,sum=0;
    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];
        if(sum == 0){
            maxm = i+1;    //prefix sum = 0 longest subarray
        }
        else{
            if(mp.find(sum)!=mp.end()){    
                maxm = max(maxm , i-mp[sum]);
            }else{
                mp[sum] = i;
            }
        }
    }
    
    return maxm;
}
