#include <iostream>

#include <vector>

class Solution {
public:
  int calPoints(vector<string>& ops) {
    int totalPoints = 0;
    vector<int> scores;

    for(int i = 0; i < ops.size();i++){
      if(ops[i] == "C"){
        scores.pop_back();
      } else if(ops[i] == "D"){
        int tmp1 = 2*scores.back();
        scores.push_back(tmp1);
      } else if( ops[i] == "+"){
        int tmp2 = scores.back();
        scores.pop_back();
        int tmp3 = scores.back();
        scores.push_back(tmp2);
        scores.push_back(tmp3+tmp2);
      }else{
        scores.push_back(stoi(ops[i]));
      }
    }
    for(int point:scores){
      totalPoints += point;
    }


    return totalPoints;
  }
};
