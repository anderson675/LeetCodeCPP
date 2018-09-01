#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;
//==============================For submittion=============================
class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int count = 0;
    for(auto m:J){
      for(auto n:S){
        if(m == n) count++;
      }
    }
    return count;   
  }
};
//=========================================================================

int main(){
  int test = 0;
  const string J = "aA";
  const string S = "aAAbbbb";
  Solution testClass;

  test = testClass.numJewelsInStones(J,S);
  cout<<test<<endl;

  return 0;
}
