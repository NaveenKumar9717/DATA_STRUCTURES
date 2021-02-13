

vector <int> bottomView(Node *root)
{
	if ( ! root) {
		return {} ;
	}
	map<int, int> mp;
	vector<int>vec ;
	queue<pair<struct Node*, int> > que;
	que.push(make_pair(root, 0)) ;
	while (que.empty() == false) {
		pair<struct Node*, int> current = que.front() ;
		que.pop();


		mp[current.second] = current.first->data;


		if (current.first->left)
			que.push(make_pair(current.first->left, current.second - 1)) ;

		if (current.first->right)
			que.push(make_pair(current.first->right, current.second + 1)) ;

	}
	auto i  = mp.begin() ;
	while (i != mp.end()) {
		vec.push_back(i->second);
		i++;
	}
	return vec ;
}