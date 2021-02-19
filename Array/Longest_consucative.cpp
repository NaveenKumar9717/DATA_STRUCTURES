#include<bits/stdc++.h>
using namespace std;

int pro(int*arr, int n ) {

	int profit[n]   ;


	int Max = arr[n - 1] ;
	profit[n - 1] = 0  ;

	for (int  i = n - 2 ; i >= 0; i--) {
		if (Max < arr[i])
			Max = arr[i] ;

		profit[i] = max(0, Max - arr[i]) ;
	}

	int minrate = arr[0]  ;
	int maxprof  = 0 ;

	for (int i = 1 ; i < n ; i ++) {
		if (minrate > (arr[i]))
			minrate = arr[i] ;

		if (maxprof < arr[i] - minrate)
			maxprof = arr[i] - minrate ;

		profit[i] = max(profit[i - 1], profit[i] + maxprof) ;
	}


	return profit[n - 1] ;
}

int main() {
	int n ;
	cin >> n ;
	int arr[n]  ;
	for (int i  = 0 ; i  < n ; i++) {
		cin >> arr[i] ;
	}
	cout << pro(arr, n) << endl;

	return  0 ;
}