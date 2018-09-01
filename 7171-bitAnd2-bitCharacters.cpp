class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
      bool flag;
      for(int i = 0; i < bits.size();){
        if( bits[i]) flag = false,  i+=2;
        else flag = true, i++;
      }
      return flag;
    }
};
