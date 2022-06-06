https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems

// Approach-1

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i] == 1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(int i=0;i<c0;i++){
        arr[i] = 0;
    }
    for(int i=c0;i<(c1+c0);i++){
        arr[i] = 1;
    }
    for(int i=(c0+c1);i<n;i++){
        arr[i] = 2;
    }
}

// Approach-2

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   
    int start = 0;
    int end = n-1;
    for(int i=0;i<=end;i++){      //end used for last 2 in the updated array, here i<n didn't work out as end should not be less or equal to start
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[end]);
            i--;                // to keep it in same index after i++
            end--;
        }
        else{
          continue;
        }
    }
}

