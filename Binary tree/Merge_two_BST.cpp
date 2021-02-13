#include<bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class Node {
public:

	int data;
	Node* left ;
	Node* right ;
};

Node* newNode(int data)
{
	Node* root  = new Node();
	root->data  = data;
	root->left  = NULL;
	root->right = NULL;

	return (root);
}

void printInorder(Node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	cout << node->data << " ";

	/* now recur on right child */
	printInorder(node->right);
}

pair<Node*, Node*> Tree2linkedkist(Node* root)
{


	pair<Node*, Node*> ans ;

	ans.first = root  ;
	ans.second = root ;

	if (root->left) {
		pair<Node*, Node*> left_list = Tree2linkedkist(root->left) ;
		ans.first = left_list.first ;
		root->left = left_list.second ;
		left_list.second->right = root ;
		ans.second  = root ;
	}

	if (root->right) {
		pair<Node*, Node*> right_list = Tree2linkedkist(root->right) ;
		ans.second->right = right_list.first ;
		right_list.first->left = ans.second ;
		ans.second = right_list.second ;
	}

	return ans ;
}

Node* Merge(Node* root1, Node* root2) {

}

int main()
{
	/* Create following tree as first balanced BST
		100
		/ \
		50 300
	/ \
	20 70
	*/
	Node *root1 = newNode(100);
	root1->left	 = newNode(50);
	root1->right = newNode(300);
	root1->left->left = newNode(20);
	root1->left->right = newNode(70);

	/* Create following tree as second balanced BST
			80
		/ \
		40 120
	*/
	Node *root2 = newNode(80);
	root2->left	 = newNode(40);
	root2->right = newNode(120);

	Node* head1  = Tree2linkedkist(root1).first ;
	Node* head2  = Tree2linkedkist(root2).first ;

	while (head1) {
		cout << head1->data << " ";
		head1 = head1->right ;
	}
	cout << endl;
	while (head2) {
		cout << head2->data << " ";
		head2 = head2->right ;
	}
	cout << endl;
	NodE* Mhead = Merge(head1, head2) ;
	// node *mergedTree = mergeTrees(root1, root2, 5, 3);

	// cout << "Following is Inorder traversal of the merged tree \n";
	//printInorder();

	return 0;
}