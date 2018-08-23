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
  bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> leaf1, leaf2;
    DFS(root1, leaf1);//DFS the first tree
    DFS(root2, leaf2);//DFS the second tree
    return leaf1 == leaf2;//compare the result;
  }

  void DFS(TreeNode* root, vector<int> &leaf){
    if(!root) return;
    if(!root->left && !root->right) leaf.push_back(root->val); //Find a leaf node: push its value into the vector
    DFS(root->left,leaf); //recursivly DFS the left branch always
    DFS(root->right,leaf); // then recursivly DFS the right branch
    //This makes sure that we always search along the right branch, find the leaf node and push its into vector
  }
};
