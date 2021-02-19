#include<bits/stdc++.h>
using namespace std;
int TRADING(int arr[], int n) {
	int profit = 0 ;
	int max_stock = 0 ;
	int n = prices.size() ;
	for (int i = n - 1; i >= 0; i--) {
		if (prices[i] >= max_stock) {
			max_stock = prices[i] ;
		}
		if ((max_stock - prices[i]) > profit) {
			profit = max_stock - prices[i] ;

		}
	}
	return profit ;
}

int main() {
	int n ;
	cin >> n ;
	int arr[n] ;
	for (int  i = 0 ; i < n; i++) {
		cin >> arr[i] ;
	}
	cout << TRADING(arr, n) << endl;
	return 0  ;
}