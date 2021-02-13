#include <bits/stdc++.h>
using namespace std;

/* A binary tree node structure */
struct node
{
    int data;
    struct node *left, *right;
};

/* Utility function to create a new Binary Tree node */
struct node* newNode(int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

pair<int, int> maxsumhelper(node* root) {
    if (! root)
        return make_pair(0, 0) ;
    pair<int, int> ans ;

    pair<int, int> left = maxsumhelper(root->left) ;
    pair<int, int> right = maxsumhelper(root->right) ;

    ans.first = root->data + left.second + right.second ;
    ans.second = max(left.first, left.second) + max(right.first, right.second);
    return ans ;

}
int callhelper(node* node);
int getMaxSum(node* node);
int Maxsumuntill(node* node, map<struct node*, int> & mp);

int callhelper(node* root, map<struct node*, int>& mp) {
    if (! root)
        return 0 ;

    int sum  = 0 ;

    if (root->left)
        sum += Maxsumuntill(root->left->left, mp) + Maxsumuntill(root->left->right, mp) ;
    if (root->right)
        sum += Maxsumuntill(root->right->left, mp) + Maxsumuntill(root->right->right, mp) ;

    return sum  ;
}
int Maxsumuntill(node* root, map<struct node*, int>& mp) {
    if (! root)
        return  0  ;
    if (mp.find(root) != mp.end())
        return mp[root] ;

    int option1  = root->data +  callhelper(root, mp)  ;

    int option2  = Maxsumuntill(root->left, mp) ;

    return max(option1, option2) ;

}
bool printK(node* root, int k ) {
    if (! root)
        reutrn false ;
    if (k == root->data) {
        cout << root->data << " ";
        return true;
    }

    if (root->left) {



    }
}

int getMaxSum(node* root) {
    map<struct node*, int> mp ;
    return Maxsumuntill(root, mp);
}

int main()
{
    node* root = newNode(10);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(5);
    root->left->left = newNode(1);

    // pair<int, int> ans = maxsumhelper(root) ;
    // cout << getMaxSum(root) << endl << max(ans.first, ans.second) << endl;

    return 0;
}