class Solution {
public:
  double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
      sum += nums[i];
    }

    int max_val = sum;

    for (int i = 0; i + k < nums.size(); ++i) {
      sum = sum + nums[i + k] - nums[i];
      max_val = std::max(max_val, sum);
    }

    return static_cast<double>(max_val) / k; 
  }
};
