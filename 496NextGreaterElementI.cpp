class Solution {
public:
  vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    stack<int> stack_index;
    unordered_map<int,int> mymap;
    for(int i = 0 ; i < nums.size() ; i ++)
      {
        while(!stack_index.empty() && nums[i] > nums[stack_index.top()])
          {
            mymap[nums[stack_index.top()]] = nums[i];
            stack_index.pop();
          }
        stack_index.push(i);
      }
    for(int i = 0 ; i < findNums.size() ; i++)
      findNums[i] = (mymap[findNums[i]] == 0)?-1:mymap[findNums[i]];
    return findNums;
  }
};
