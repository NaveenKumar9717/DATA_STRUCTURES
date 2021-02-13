#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;
};

struct node* newNode(int data)
{
	struct node *temp = new struct node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

Node* lca(Node* root , int n1 , int n2 )
{
	if (! root)
		return NULL ;

	if (root->data == n1 || root->data == n2)
		return root ;

	Node* left = lca(root->left, n1, n2) ;
	Node* right = lca(root->right, n1, n2) ;
//  9 10
// 7 1 10 N 2 9 11 N 4 8 N N 12
	if (left != NULL && right != NULL )
		return root ;

	if (left)
		return left ;
	else
		return right ;

}
pair<int, int> Kth(node* root, int number, int k) {
	if (!root)
		return make_pair(-1, -1) ;

	if (root->data == number)
		return make_pair(number, 0) ;

	pair<int, int> left = Kth(root->left, number, k);
	pair<int, int> right = Kth(root->right, number, k) ;

	if (left.second != -1) {
		if (left.first != number)
			return left ;
		else if (left.second + 1 == k )
			left.first = root->data ;
		else
			left.second += 1 ;
		return left ;
	}

	if (right.second != -1) {
		if (right.first != number)
			return right ;
		else if (right.second + 1 == k )
			right.first = root->data ;
		else
			right.second += 1 ;
		return right ;
	}
	return make_pair(-1, -1) ;

}

int main() {
	node* root = newNode(10);
	root->left = newNode(2);
	root->right = newNode(3);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->left->left = newNode(1);
	int n1, k ;
	cin >> n1 >> k;

	cout << Kth(root, n1, k).first ;

	return 0;
}