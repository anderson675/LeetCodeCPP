class Solution {
public:
  int findLengthOfLCIS(vector<int>& nums) {
    int temp = 0, result = 0;
    for(int i = 0; i < nums.size(); i++){
      if(nums[i-1]<nums[i]){ result = max(result,++temp);
      } else {
        temp = 1;
      }
    }
    return result;
  }
};
