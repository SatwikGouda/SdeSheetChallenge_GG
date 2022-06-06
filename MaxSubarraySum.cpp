//https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=striver-sde-sheet-problems&leftPanelTab=1

// Kadane's Algorithm

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    
    long long int max_ending = 0, max_till_now = INT_MIN;
    for(int i=0;i<n;i++){
        max_ending += arr[i];
        if(max_ending<arr[i]){
            max_ending = arr[i];
        }
        if(max_till_now<max_ending){
            max_till_now = max_ending;
        }
      
        // to remove negative sum value -
        if(max_till_now<0){   
            max_till_now = 0;
        }
    }
    return max_till_now;
    
    
}
