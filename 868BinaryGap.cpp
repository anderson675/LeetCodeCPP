#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

class Solution {
public:
  int binaryGap(int N) {
    int curPos = 0;
    int lastOnePos = -1;
    int maxDis = 0;

    while(N)
      {
        if(N%2 == 1)//if a 1 met 
          {
            if(lastOnePos != -1)
              {
                maxDis = max(curPos - lastOnePos, maxDis);
              }
            lastOnePos = curPos; //record the 1 position
          }

        N /= 2; // <<1
        ++curPos; // <<1
      }

    return maxDis;
  }
};



