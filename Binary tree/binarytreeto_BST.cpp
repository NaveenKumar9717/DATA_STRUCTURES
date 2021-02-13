#include<bits/stdc++.h>
using namespace std ;

void inorder(int a[], std::vector<int> &v,
             int n, int index)
{

	if (index >= n)
		return;
	inorder(a, v, n, 2 * index + 1);


	v.push_back(a[index]);

	inorder(a, v, n, 2 * index + 2);
}

int Count(int*arr, std::vector<int> &v) {

	vector< pair<int, int>> t(v.size()) ;
	int ans =  0 ;
	for (int  i = 0  ; i < v.size(); i++) {
		t[i].first = v[i] ;
		t[i].second = i ;
	}

	sort(t.begin(), t.end());

	for (int i = 0 ;  i < t.size(); i++) {
		if (i == t[i].second)
			continue ;
		else {
			swap(t[i], t[t[i].second]) ;
		}
		if (t[i].second != i ) {
			i--;
		}
		ans ++ ;
	}
	return  ans ;
}

int main() {
	int arr[] = { 5, 6, 7, 8, 9, 10, 11 } ;

	vector<int>vec ;
	inorder(arr, vec, 7, 0) ;

	cout << Count(arr, vec);

	return  0 ;
}