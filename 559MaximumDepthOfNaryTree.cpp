
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

class Solution {
public:
  int maxDepth(Node* root) {
    if (!root) return 0; //if there is no sub tree, return.
    int res = 1;
    for(Node* child : root->children) 
      res = max(res, maxDepth(child) + 1);
    return res; 
  }
};
