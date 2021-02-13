vector<int> reverseLevelOrder(Node *root)
{
  queue<Node*>qu ;
  qu.push(root) ;
  stack<int>stk ;
  vector<int>holder ;
  while (! qu.empty()) {
    Node*current = qu.front() ;
    qu.pop() ;
    stk.push(current->data) ;
    if (current->right != NULL)
      qu.push(current->right) ;

    if (current->left != NULL)
      qu.push(current->left) ;

  }

  while (!stk.empty()) {
    holder.push_back(stk.top()) ;
    stk.pop() ;
  }


  return holder ;
}