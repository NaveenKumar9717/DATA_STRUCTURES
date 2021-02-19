#include<bits/stdc++.h>
using namespace std;
int mindiff(int*arr, int n, int k, int mn, int mx) {
	if (n == 0) {
		return mx - mn ;
	}
	if (k < arr[0]) {
		int  temp = arr[0] ;
		arr[0] = arr[0] - k ;
		if (arr[0] < mn) {
			mn = arr[0] ;
		}
		int x = mindiff(arr, n - 1, k, mn, mx) ;
		arr[0] = temp + k ;
		if (arr[0] > mx) {
			mx = arr[0] ;
		}
		int y = mindiff(arr, n - 1, k, mn, mx) ;
		return min(x, y) ;
	}
	else {
		arr[0] = arr[0] + k ;
		if (arr[0] > mx) {
			mx = arr[0] ;
		}
		return mindiff(arr, n - 1, k, mn, mx) ;
	}

}

int main() {

	int n ;
	cin >> n;
	int k ;

	int arr[n] ;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i] ;
	}
	cin >> k ;
	cout << mindiff(arr, n, k, INT_MAX, INT_MIN) << endl;
	return 0  ;
}