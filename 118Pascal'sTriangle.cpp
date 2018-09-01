class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for(int i = 0; i < numRows; i++){
      vector<int> temp;
      
      if(i == 0) {
      temp.push_back(1);
      } else if(i == 1){
        temp.push_back(1);
        temp.push_back(1);
      }else {
        int numElements = i+1;
        for(int j = 0; j < numElements; j++){
          if( j == 0 || j == i){
            temp.push_back(1);
          }else {
            int num1 = result[i-1][j-1];
            int num2 = result[i-1][j];
            temp.push_back(num1+num2);
          }
        }
      }
      result.push_back(temp);
    }
    return result;
  }
};
