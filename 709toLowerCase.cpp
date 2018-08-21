#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;
//==============================For submittion=============================
class Solution {
public:
  string toLowerCase(string str) {
    for(auto &s:str){
      if(isupper(s)) s = tolower(s);
    }
    return str;
  }
};
//=========================================================================

int main(){

  string S = "aAAbbbb";
  Solution testClass;
  cout<<testClass.toLowerCase(S)<<endl;

  return 0;
}
