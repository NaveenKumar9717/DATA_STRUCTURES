#include<bits/stdc++.h>
using namespace std ;
class Node {
public  :

	int data;
	Node* left;
	Node* right ;
	Node(int data) {
		this->data  = data  ;
		this->left = NULL ;
		this->right = NULL ;
	}

};

int find_index(string st, int si, int ei) {
	if (si > ei)
		return -1 ;

	stack<char>stk ;

	for (int i = si; si <= ei; i++) {
		if (st[i] == '(') {
			stk.push(st[i]) ;
		}
		else if (st[i] == ')') {
			stk.pop();
			if (stk.empty()) {
				return  i  ;
			}
		}
	}

	return -1 ;

}
void preOrder(Node* node)
{
	if (node == NULL)
		return;
	cout << node->data << " " ;
	preOrder(node->left);
	preOrder(node->right);
}

Node*  MKT(string st, int si, int ei) {
	if (si > ei) {
		return NULL ;
	}
	int index = -1 ;
	Node* root = new Node(st[si] - '0') ;
	if (si + 1 <= ei && st[si + 1] == '(') {

		index = find_index(st, si + 1, ei);

	}
	if (index  != -1) {
		root->left = MKT(st, si + 2, index - 1) ;
		root->right = MKT(st, index + 2, ei - 1);
	}



	return root ;
}

int main() {
	string str  ;
	cin >> str ;
	Node* root = MKT(str, 0, str.length() - 1);
	// cout << root->left->data << " " << root->right->data << endl;
	preOrder(root);



	return  0 ;
}