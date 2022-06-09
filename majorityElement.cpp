//https://www.codingninjas.com/codestudio/problems/majority-element_842495?topList=striver-sde-sheet-problems&leftPanelTab=1
// Using HashMap

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    // Write your code here.
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
        if(map[arr[i]] > n/2){
            return arr[i];
        }
    }
    return -1;
}
