void diagonalPrintUtil(Node* root, int d,
                       map<int, vector<int>> &diagonalPrint)
{
    // Base case
    if (!root)
        return;

    diagonalPrint[d].push_back(root->data);

    // Increase the vertical
    // distance if left child
    diagonalPrintUtil(root->left,
                      d + 1, diagonalPrint);

    // Vertical distance remains
    // same for right child
    diagonalPrintUtil(root->right,
                      d, diagonalPrint);
}

// Print diagonal traversal
// of given binary tree
void diagonalPrint(Node* root)
{

    // create a map of vectors
    // to store Diagonal elements
    map<int, vector<int> > diagonalPrint;
    diagonalPrintUtil(root, 0, diagonalPrint);

    cout << "Diagonal Traversal of binary tree : \n";
    for (auto it : diagonalPrint)
    {
        vector<int> v = it.second;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}



void print_right(Node*root, vector<int>&vec) {
    if ( !root) {
        return ;
    }
    vec.push_back(root->data) ;
    if (root->right) {
        print_right(root->right, vec) ;
    }
    else if (root->right) {
        print_right(root->right, vec) ;
    }

}