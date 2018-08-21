#include <iostream>
#include <string>
#include <vector>
#include <set>

using std::cin; using std::cout; using std::string; using std::endl; using std::vector; using std::set;
//=================================================================
class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> res;   //std::set only contains unique element
    for(auto word:words)
      {
        string tmp = "";
        for(auto ch:word)
          {
            tmp += morse[ch - 'a'];
          }
        res.insert(tmp);
      }
    return res.size();
  }
};
//=================================================================

int main(){
  vector<string> str = {"gin", "zen", "gig", "msg"};
  cout<<Solution::uniqueMorseRepresentations(str)<<endl;
  return 0;
}
