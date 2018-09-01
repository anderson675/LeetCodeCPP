class Solution {
public:
  int findShortestSubArray(vector<int>& nums) {
    unordered_map<int,vector<int>> myMap;
    for(int i = 0; i < nums.size(); i++){
      myMap[nums[i]].push_back(i);
    }

      int degree = 0;
      for(auto it = myMap.begin(); it != myMap.end(); it++){
        degree = max(degree,int(it->second.size()));
      }
      int result = nums.size();
      for(auto it = myMap.begin(); it != myMap.end();it++){
        if(it->second.size()==degree){
          result = min(result,it->second.back() - it->second[0]+1);
        }
      }
      return result;
    }
  }
};
