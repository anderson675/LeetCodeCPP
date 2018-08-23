class Solution {
public:
  vector<int> numberOfLines(vector<int>& widths, string S) {
    int left = 0;
    int lines = 0;
    vector<int> answer;
    for (char c : S) {
      left += widths[c - 'a'];
      if (left >= 100) {
        lines ++;
        left = left > 100 ? widths[c - 'a'] : 0;
      }
    }
    lines += left > 0 ? 1 : 0;
    answer.push_back(lines);
    answer.push_back(left);
    return answer;
  }
  
};
