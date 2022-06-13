#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> rows(n);
    for(int i=0;i<n;i++){
        rows[i].resize(i+1);
        rows[i][0] = rows[i][i] = 1;
        
        for(int j=1;j<i;j++){
             rows[i][j] = rows[i-1][j-1] + rows[i-1][j];   
        }   
    }
    return rows;
}
