#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int n, m ;
		cin >> n >> m;
		int arr[n] , arr1[m];
		unordered_set<int>st ;
		for (int i = 0 ; i < n; i++) {
			cin >> arr[i] ;
			st.insert(arr[i]) ;
		}
		for (int i = 0 ; i < m; i++) {
			cin >> arr1[i] ;
			st.insert(arr1[i]) ;
		}

		cout << st.size() << endl;
		st.clear();
	}

	return 0 ;

}