
class Solution {
public:
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> myList;
    for(int i = left; i <= right; i++){
      if(Check(i)) myList.push_back(i);
    }
    return myList;
  }

  bool Check(int num){
    string numStr = to_string(num);
    for(char ch:numStr){
      if(ch == '0'|| num%(ch-'0')) return false;
    }
    return true;
  }
};
