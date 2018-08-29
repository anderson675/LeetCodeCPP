class Solution {
public:
  vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
    int sum_a = 0;
    int sum_b = 0;
    unordered_set<int> s;
    for(int i: A) sum_a += i;
    for(int i: B){
      sum_b += i;
      s.insert(i);
    }
    for(int i: A){
      int b = (2 * i + sum_b - sum_a) / 2; // Because sum_a - i + b = sum_b - b + i
      if(s.count(b))
        return {i, b};
    } 
  }
};
