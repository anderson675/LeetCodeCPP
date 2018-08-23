class Solution {
public:
  string reverseWords(string s) {
    int flag = 0;
    for(int i = 0; i <= s.length(); ++i){
      if(i == s.length() || s[i] == ' '){
        reverse(&s[flag], &s[i]);
        flag = i + 1;
      }
    }
        
    return s;
  
  }
};
