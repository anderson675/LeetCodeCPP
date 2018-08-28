/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  vector<double> averageOfLevels(TreeNode* root) {
    vector<double> answer;
    queue<TreeNode* > myList;

    myList.push(root);
    while(!myList.empty()){
      long temp = 0;
      int size = myList.size();
      for(int i = 0; i < size; i++){ //for each level on the tree
        TreeNode* t = myList.front();//refer to the first node saved in the queue;
        myList.pop();//...and pop it
        if(t->left) myList.push(t->left);//if the top node contains any subbranch, push its subbranch into the end of the queue
        if(t->right) myList.push(t->right);
        temp += t->val;
      }
      answer.push_back((double)temp/size);//divide the sum of val by the size of node on each level;
    }
    return answer;


  }
};
