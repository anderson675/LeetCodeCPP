/*
// Definition for a Node.
class Node {
public:
int val;
vector<Node*> children;

Node() {}

Node(int _val, vector<Node*> _children) {
val = _val;
children = _children;
}
};
*/
class Solution {
public:
  vector<int> postorder(Node* root) {
    vector<int> result, tmp;
    if (root == NULL) return result;
    for (int i = 0; i < root->children.size(); ++i)
      {
        tmp = postorder(root->children[i]);
        for (int j = 0; j < tmp.size(); ++j)
          result.push_back(tmp[j]);
      }
    result.push_back(root->val);
    return result;
  }
};
