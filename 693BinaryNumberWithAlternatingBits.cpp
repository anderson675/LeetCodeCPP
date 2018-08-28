class Solution {
public:
  bool hasAlternatingBits(int n) {
    int a = (n^(n>>1)) + 1; //if n has alternating bits, n^(n>>1)  will always generate a bit number only contains 1
    return !(a&(a-1));// and n^(n>>1) + 1 will generate a number that with 0s but with a leading bit 1 (like 100000..)
                      //a&(a-1) will always be false in such case
  }
};
