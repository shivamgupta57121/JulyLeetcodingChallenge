// Problem: Island Perimeter
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3383/

// Solution: 

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int ar=0;
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    if((i>0 && grid[i-1][j]==0)||i==0) ar++;
                    if(j==n-1 ||(j<n-1 && grid[i][j+1]==0)) ar++;
                    if(i==m-1 ||(i<m-1 && grid[i+1][j]==0)) ar++;
                    if(j==0 ||(j>0 && grid[i][j-1]==0)) ar++;
                }
            }
        }
        return ar;
    }
};
