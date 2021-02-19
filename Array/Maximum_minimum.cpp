#include<bits/stdc++.h>
using namespace std  ;
pair<int, int> tournament_method(int*arr, int si, int ei) {
	int maximum = INT_MIN ;
	int minimum = INT_MAX  ;

	for (int  i = si; i <= ei; i++) {
		minimum = min(minimum, arr[i]) ;
		maximum = max(maximum, arr[i])  ;
	}
	pair<int, int>ans ;
	ans.first =  minimum ;
	ans.second = maximum ;
	return ans ;
}

int main() {
	int n ;
	cin >> n ;
	int*arr = new int[n] ;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i] ;
	}
	int global_max = INT_MIN ;
	int global_min  = INT_MAX ;
	if (n == 1) {
		global_min = arr[0]  ;
		global_max = arr[0]  ;
	}
	else if (n == 2) {
		global_min = min(arr[0], arr[1]) ;
		global_max = max(arr[0], arr[1]) ;

	}
	else {
		int mid = (n / 2) ;
		pair<int, int>ans_left = tournament_method(arr, 0, mid) ;
		pair<int, int>ans_right = tournament_method(arr, mid + 1, n - 1);
		global_max = max(ans_left.second, ans_right.second) ;
		global_min = min(ans_right.first, ans_left.first) ;
	}
	cout << global_min << " " << global_max << endl;

	delete [] arr ;

	return  0 ;
}