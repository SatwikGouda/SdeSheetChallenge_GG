https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
      // Write your code here.
    sort(arr.begin(),arr.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            ans = arr[i];
            break;
        }
    }
    return ans;
    
}
