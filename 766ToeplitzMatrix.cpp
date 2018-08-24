class Solution {
public:
  bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for(int i = 1; i < matrix.size(); ++i){
      vector<int> tmp1(matrix[i-1].begin(),matrix[i-1].end() -1);
      vector<int> tmp2(matrix[i].begin()+1,matrix[i].end());
      if (tmp1 != tmp2){
        return false;
      }
    }
    return true;
  }
};
