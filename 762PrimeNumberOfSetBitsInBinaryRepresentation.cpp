class Solution {
public:
  int countPrimeSetBits(int L, int R) {
    int count = 0;
    set<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    for(int i = L; i <= R; i++){
      int bits = 0;
      for(int n = i; n ; n >>=1){
        bits += n&1;
      }
      count += primes.count(bits);
    }
    return count;
  }
};
