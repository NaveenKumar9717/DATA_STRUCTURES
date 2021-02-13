void inorder(Node *root)
{

	if (root == nullptr)
		return;


	inorder(root->left);

	cout << root->data << " ";


	inorder(root->right);
}

void preorder < Node* root) {
	if (root == NULL) {
		return  ;
	}
	cout << root->data << " ";

	preorder(root->left);

	preorder(root->right);
}