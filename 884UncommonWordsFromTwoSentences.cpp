class Solution {
public:
  vector<string> uncommonFromSentences(string A, string B) {
    vector<string> result;
    vector<string> Awords;
    vector<string> Bwords;
    int stepA = 0, stepB = 0;

    for(int i = A.size(); i >= 0;i--,stepA++){
      if(A[i] == ' '){
        Awords.push_back(A.substr(i+1,stepA));
        stepA = 0;
      }
    }
    for(int i = B.size(); i >= 0;i--,stepB++){
      if(B[i] == ' '){
        Bwords.push_back(B.substr(i+1,stepB));
        stepB = 0;
      }
    }
    for(int i = 0; i < Awords.size();i++){
      if(!Awords[i]){
        result.push_back(Bwords[i]);
      }else if(){
        result.push_back(Awords[i]);
      }else if(Awords[i]!= Bwords[i]){
        result.push_back(Awords[i]);
        result.push_back(Bwords[i]);
      }
    }
      return result;
  }
};
