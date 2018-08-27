class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    int m = nums.size();
    int n = nums[0].size();
    if (r*c != m*n)
      return nums; //return the original matrix if the area assigned not fit.
    vector<vector<int>> result(r, vector<int>(c)); //create a vector with r long,each element is c long
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        int linear_address = i * c + j;
        int x = linear_address / n;
        int y = linear_address % n;
        result[i][j] = nums[x][y];
      }
    }
    return result;

  }
};
