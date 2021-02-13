#include <bits/stdc++.h>
using namespace std;


// <-------  Note :- always first understand the question then start implementing on it an d giving time to problem   ----------->



struct Node
{
	int data;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};

void prt(vector<int>& vec, int i) {

	for (int  j = i; j < vec.size(); j++) {
		cout << vec[j] << " ";
	}
	cout << endl;
}

void printKPath(Node* root,   vector<int>& vec , int k) {
	if (! root)
		return ;

	vec.push_back(root->data);
	printKPath(root->left, vec, k) ;
	printKPath(root->right, vec, k) ;

	int sum = 0 ;

	for (int i  = vec.size() - 1 ; i >= 0; i--)
	{
		sum += vec[i] ;
		if (sum == k)
			prt(vec, i) ;
	}

	vec.pop_back() ;
}

int main()
{
	Node *root = new Node(1);
	root->left = new Node(3);
	root->left->left = new Node(2);
	root->left->right = new Node(1);
	root->left->right->left = new Node(1);
	root->right = new Node(-1);
	root->right->left = new Node(4);
	root->right->left->left = new Node(1);
	root->right->left->right = new Node(2);
	root->right->right = new Node(5);
	root->right->right->right = new Node(2);

	int k = 5;
	vector<int>vec ;
	printKPath(root,  vec, k);

	return 0;
}