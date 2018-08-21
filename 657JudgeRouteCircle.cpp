#include <iostream>

public class Solution {
    public bool JudgeCircle(string moves) {
      int x=0,y=0;
      for(auto a:moves){
        if(a == 'U'){
          x++;
        }else if(a == 'D'){
          x--;
        }else if(a == 'R'){
          y++;
        }else if(a == 'L'){
          y--;
        }
      }
      if(x == 0 && y == 0) return true;
      else return false;
    }
}
