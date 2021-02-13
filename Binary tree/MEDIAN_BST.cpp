#include <bits/stdc++.h>
using namespace std;

class Node {
public :
	int data ;
	Node* left  ;
	Node* right ;

	Node(int data) {
		this -> data = data ;
		left = right = NULL ;
	}
};

void count(Node* root, int& ans) {
	if (! root)
		return   ;
	ans ++ ;
	count(root->left, ans) ;
	count(root->right, ans) ;

}

Node* Median(Node* root, int& place, int target) {
	if (! root)
		return root ;

	if (root->left) {
		Node* left  = Median(root->left, place, target) ;
		if (left)
			return left ;
	}
	if (! target)
		return root ;
	place ++ ;
	if (target == place) {
		return root ;
	}

	Node* right  = Median(root->right, place, target) ;
	return right ;
}

int main() {
	Node* root = new  Node(10);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->left = new Node(4);
	root->right->right = new Node(5);
	root->left->left = new Node(1);
	int ans = 0 ;
	count(root, ans) ;
	int target = ans / 2 ;
	int place =  0 ;
	Node* fck  = Median(root, place, target) ;
	cout << fck->data << endl;

	return  0  ;
}