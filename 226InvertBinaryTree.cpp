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
  TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr) return root;
    queue<TreeNode*> myQueue;

    myQueue.push(root);
    while(!myQueue.empty()){
      TreeNode* node = myQueue.front();
      myQueue.pop();

      if(node->left != nullptr) myQueue.push(node->left);
      if(node->right != nullptr) myQueue.push(node->right);

      TreeNode* temp = node->left;
      node->left = node->right;
      node->right = temp;
    }
    return root;

  }
};
