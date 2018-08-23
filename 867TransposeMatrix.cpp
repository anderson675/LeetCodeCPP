class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> myList;

    for(size_t i = 0; i < A[0].size(); ++i)
      {
        vector<int> line;
        for(size_t j = 0; j < A.size(); ++j)
          {
            line.push_back(A[j][i]);
          }

        ans.push_back(line);
      }

    return ans;
  }
};
