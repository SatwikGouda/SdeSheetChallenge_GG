// O(N^3) approach using sorting and two pointer 

#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
          // For the remaining elements
            int first = j+1;
            int last = n-1;
            
            while(first<last){
                int sum = arr[i] + arr[j] + arr[first] + arr[last];
                if(sum == target){
                    return "Yes";
                }
                else if(sum<target){
                    first++;
                }else{
                    last--;
                }
            }
     
        }
    }
    return "No";
}
