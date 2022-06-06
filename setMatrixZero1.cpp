//https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int row=matrix.size();
    int col=matrix[0].size();
    
    //vector<vector<int>> ans(row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == 0){
                // For Row elements
                for(int x=0;x<col;x++){
                    if(matrix[i][x] != 0){
                        matrix[i][x] = -1;
                    }
                }
              // For Column Elements
                for(int y=0;y<row;y++){
                    if(matrix[y][j]!=0){
                        matrix[y][j] = -1;
                    }
                }
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1)
                matrix[i][j]=0;
        }
    }
}
