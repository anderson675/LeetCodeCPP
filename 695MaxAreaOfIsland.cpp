class Solution {
public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int max_area = 0;
    for(int i = 0; i < grid.size(); i++){
      for(int j = 0; j < grid[i].size(); j++){
        if(grid[i][j] == 1) max_area = max(max_area, AreaOfLand(grid,i,j));
      }
    }
    return max_area;
  }

  int AreaOfLand(vector<vector<int>>& grid, int i, int j){
    if(i >= 0 && i < grid.size() // make sure the i in valid row range..
       && j >= 0 && j < grid[i].size() // and the j in valid col range..
       && grid[i][j] == 1) // and the current grid is 1
      {
        grid[i][j] = 0;
        return 1 //the current grid point
          +AreaOfLand(grid,i+1,j) //recursion on the right one
          +AreaOfLand(grid,i-1,j) //recursion on the left one
          +AreaOfLand(grid,i,j+1) //recursion on the lower one
          +AreaOfLand(grid,i,j-1); //recursion on the upper one 
      }
    return 0;
  }
  }
};
