#include<bits/stdc++.h>
using namespace std;


int multiply(int arr[], int size, int x) {
	int carry = 0 ;
	int prod = 1 ;
	for (int i = 0 ; i < size ; i++) {
		prod = arr[i] * x + carry  ;
		arr[i] = prod % 10 ;
		carry  = prod / 10 ;
	}
	while (carry) {
		arr[size] = carry % 10 ;
		carry = carry / 10 ;
		size ++ ;

	}
	return size  ;
}

int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int num ;
		cin >> num;
		int arr[5000] ;
		arr[0] = 1 ;

		int  arr_size = 1 ;
		for (int x = 2 ; x <= num; x++) {
			arr_size = multiply(arr, arr_size, x) ;
		}

		for (int i = arr_size - 1; i >= 0; i--) {
			cout << arr[i];
		}
		cout << endl;
	}

	return 0  ;
}