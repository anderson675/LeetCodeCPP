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
  vector<int> preorder(Node* root) {
    if(root == NULL) return{};
    vector<int> result;
    stack<Node*> stk; //last in first out;
    stk.push(root);
    while(!stk.empty()){
      Node* temp = stk.top();//access the last element in stack
        stk.pop(); // and remove it
      for(int i = temp->children.size()-1;i>=0;i--) stk.push(temp->children[i]);//push the subbranch of a node into stack
      result.push_back(temp->
                       val);//save the val of current node 
    }
    return result;
  }
};
