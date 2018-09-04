class Solution {
public:
  int maxDistToClosest(vector<int>& seats) {

    /*
    int res = 0, len = seats.size();
    for (int i = 0, zero = 0; i < len; ++i) if (seats[i] == 1) zero = 0; else res = max(res, (++zero + 1) / 2);
    for (int i = 0, zero = 0; seats[i] == 0; ++i) res = max(res, ++zero);
    for (int i = n - 1, zero = 0; seats[i] == 0; --i) res = max(res, ++zero);
    return res;
    */

    int result = 0;
    int len = seats.size();
    for(int i = 0,zero = 0; i < len; ++i){
      if(seats[i] == 1){
        zero = 0;
      } else {
        result = max(result,(++zero+1)/2);
      }
    }
    for (int i = 0, zero = 0; seats[i] == 0; ++i) result = max(result, ++zero);//for the right most case
    for (int i = len - 1, zero = 0; seats[i] == 0; --i) result = max(result, ++zero);//for the left most case

    return result;

  }
};
