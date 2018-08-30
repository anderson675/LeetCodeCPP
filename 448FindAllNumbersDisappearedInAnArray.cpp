class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
      int positionIndex = abs(nums[i]) - 1;
      nums[positionIndex] = nums[positionIndex]>0?-nums[positionIndex]:nums[positionIndex];
    }
    for(int j = 0; j < nums.size(); j++){
      if(nums[j] > 0) result.push_back(j+1);
    }
    return result;
  }
};
