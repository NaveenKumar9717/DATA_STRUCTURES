vector<int> levelOrder(Node* node)
{
  queue<Node*>qu ;
  qu.push(node) ;
  vector<int>holder ;
  while (! qu.empty()) {
    Node*current = qu.front() ;
    qu.pop() ;
    holder.push_back(current->data) ;
    if (current->left != NULL)
      qu.push(current->left) ;
    if (current->right != NULL)
      qu.push(current->right) ;
  }

  return holder ;
}