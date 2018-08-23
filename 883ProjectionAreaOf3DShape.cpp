class Solution {
public:
  int projectionArea(vector<vector<int>>& grid) {
    int area = 0, gridSize = grid.size();
    for(int i = 0, v = 0; i < gridSize; ++i, area +=v, v=0)
      for(int j = 0; j < gridSize; ++j)
        v = max(v,grid[i][j]);
    for(int j = 0, v = 0; j < gridSize; ++j, area +=v, v=0)
      for(int i = 0; i < gridSize; ++i)
        v = max(v,grid[i][j]);
    for(int i = 0; i < gridSize; ++i)
      for(int j = 0; j < gridSize; ++j)
        if(grid[i][j]) area++;
    return area;
  }
};
