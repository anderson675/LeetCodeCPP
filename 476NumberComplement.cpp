class Solution {
public:
  int findComplement(int num) {
    unsigned mark = ~0;
    while(num&mark) mark<<=1;
    return ~mark&~num;

  }
};
