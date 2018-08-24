class Solution {
public:
  vector<int> shortestToChar(string S, char C) {

      int n = S.size();
      vector<int> res(n, n);//creates a vector has n element with value n
      int pos = -n;
      for (int i = 0; i < n; ++i) {//first loop find the shortes distance to char C on left
        if (S[i] == C) pos = i;
        res[i] = min(res[i], abs(i - pos));
      }
      for (int i = n - 1; i >= 0; --i) {//second loop find the same but on the right
        if (S[i] == C)  pos = i;
        res[i] = min(res[i], abs(i - pos));//compare the distance with original value
      }
      return res;
    
    
  }
};
