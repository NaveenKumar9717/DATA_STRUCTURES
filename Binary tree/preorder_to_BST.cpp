#include<bits/stdc++.h>
using namespace std  ;
class Node {
	int data ;
	Node* left ;
	Node* right ;
	Node(int data) {
		this->data = data ;
		root->left = NULL ;
		root->right = NULL ;
	}
};
Node* CONST(int* arr, int si, int ei) {
	if (si > ei)
		return NULL ;

	int mid = (si + mid) / 2 ;


}


Node* construct_bst(int * arr, int n) {
	if (! n) {
		return NULL ;
	}
	return CONST(arr, 0, n - 1) ;
}

int main() {
	int n;
	cin >> n;
	int arr[n] ;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i] ;
	}

	return 0  ;
}